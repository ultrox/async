var split = require('split');
var through = require('through2');

process.stdin
  .pipe(split(toString))
  .pipe(through(function (line, _, next) {
    console.log(line);
    next();
  }))
;
