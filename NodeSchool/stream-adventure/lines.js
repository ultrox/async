var fs = require('fs');
var split = require('split');
var through = require('through2');
var stream = through(write, end);

var count = 1;

function write (buffer, encoding, next) {
  if (count % 2 === 1) {
    this.push(buffer.toString().toLowerCase());
    this.push('\n')
  } else if (count % 2 === 0) {
    this.push(buffer.toString().toUpperCase());
    this.push('\n')
  }
  count++;
  next();
}

function end (done) {
  done();
}

process.stdin
  .pipe(split())
  .pipe(stream)
  .pipe(process.stdout);
