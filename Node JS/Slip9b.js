//9b


const express = require('express');
const app = express();
app.set('view engine', 'ejs');
app.get('/', (req, res) =>{
res.render('home.ejs');
});
app.listen(3000);


/*
Home.ejs
<%- include('navigation') %>
<h1><centre>Home</centre></h1>
<p> Welcome to Recipe Book. This page gives information of Indian recipes that can be cooked
by young and old alike. </p>
<ul>
<li>Breakfast Recipe</li>
<ol>upma</ol>
<ol><a href = "http://google.com">pohe</a></ol>
<ol>maggi</ol>
<ol>bread</ol>
<li>Lunch Recipe</li>
<ol>thali</ol>
<ol><a href = "http://google.com">poli bhaji</a></ol>
<ol>dal rice</ol>
<ol>sabji</ol>
<li>Snacks Recipe</li>
<ol>khichdi</ol>
<ol><a href = "http://google.com">soup</a></ol>
<ol>pasta</ol>
</ul>
<%- include('footer') %>

navigation.ejs
<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta http-equiv="X-UA-Compatible" content="IE=edge">
<meta name="viewport" content=
"width=device-width, initial-scale=1.0">
<title>Home</title>
</head>
<body>
<h1>Navbar</h1>
Footer.ejs
<h1>Footer</h1>
</body>
</html>

  */