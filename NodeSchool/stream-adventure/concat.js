var concat = require('concat-stream');

function reverse(body) {
  var chars = body.toString().split('');
  var revChars = chars.reverse();
  var revBody = revChars.join('');
  process.stdout.write(revBody);
}

process.stdin.pipe(concat(reverse));

