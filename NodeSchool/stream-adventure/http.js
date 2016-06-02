var http = require('http');
var fs = require('fs');
var through = require('through2');

var server = http.createServer(function (req, res) {
  if (req.method === 'POST') {
    req.pipe(through(write, end)).pipe(res);
  }
}).listen(process.argv[2]);

function write(buf, _, next) {
  // fs.createWriteStream(buf.toString().toUpperCase())
  this.push(buf.toString().toUpperCase())
  next();
}

function end(done) {
  done();
}
