// TODO: make this work.
// if yuo go to localhost:3000 the app
// there is expected crud to be working here
var express = require('express');
var bodyParser = require('body-parser');
var app = express();
var _ = require('lodash');

// express.static will serve everything
// with in client as a static resource
// also, it will server the index.html on the
// root of that directory on a GET to '/'
app.use(express.static('client'));

// body parser makes it possible to post JSON to the server
// we can accss data we post on as req.body
app.use(bodyParser.urlencoded({extended: true}));
app.use(bodyParser.json());


var lions = [];
var id = 0;

// TODO: make the REST routes to perform CRUD on lions

app.get('/lions', function(req, res) {
	res.status(200).json(lions);
});

app.get('/lions/:id', function(req, res) {
	res.status().send();
});

app.post('/lions/:id', function(req, res) {
	lions.push(req.body);
	id++;
	res.status(201).json(lions[id]);
});

app.put('/lions/:id', function(req, res) {
	res.status().send();
});

app.delete('/lions/:id', function(req, res) {
	res.status().send();
});

app.listen(3000, function() {
	console.log('on port 3000');
});
