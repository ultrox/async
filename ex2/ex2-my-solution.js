function fakeAjax(url, cb) {
  var fake_responses = {
    file1: 'The first text',
    file2: 'The middle text',
    file3: 'The last text',
  };
  var randomDelay = (Math.round(Math.random() * 1e4) % 8000) + 1000;

  console.log('Requesting: ' + url);

  setTimeout(function () {
    cb(fake_responses[url]);
  }, randomDelay);
}

function output(text) {
  console.log(text);
}

// **************************************

function getFile(file) {
  // what do we do here?
  let toCall = () => {};
  let result = null;
  let text, fn;

  // my first shitty solution
  fakeAjax(file, (response) => {
    result = response;
    // Problem is this doesn't support a scenario where the response is immediately available
    toCall(result);
  });

  //thunk
  return function thunk1(cb) {
    toCall = cb;
  };
}

const th1 = getFile('file1');
const th2 = getFile('file2');
const th3 = getFile('file3');

th1((val1) => {
  console.log(val1);
  th2((val2) => {
    output(val2);
    th3((val3) => {
      output(val3);
    });
  });
});

// request all files at once in "parallel"
// ???
