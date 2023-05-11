//8a

var express = require("express");
var app = express();
app.get("/", function (request, response) {
    response.sendFile(__dirname + "/server.html");
});
app.get("/addfiles", function (request, response) {
    var file1 = request.query.file1;
    var file2 = request.query.file2;
    if (file1 != "") {
        response.send("Your files are read. Check the temp.txt for output");
    } else {
        response.send("Please provide us all file name");
    }
    const fs = require('fs');
    const uc = require('upper-case');
    const file11 = uc.upperCase(fs.readFileSync(file1, 'utf-8'));
    fs.writeFileSync('temp.txt', file11);
    const file22 = uc.upperCase(fs.readFileSync(file2, 'utf-8'));
    fs.appendFileSync('temp.txt', file22); //('temp.txt', file22);
});
app.listen(8081);
console.log("Something awesome to happen at http://localhost:8081");


/*
<html>
<head>
<title>Simple hello world</title>
</head>
<body>
<h1>Hello Node JS</h1>
<form method='GET' action="/addfiles">
<span>Enter file name 1 :</span>
<input type="file" id="file1" name="file1" />
<span>Enter file name 2 :</span>
<input type="file" id="file2" name="file2" />
<input type="submit" value="combine files" />
</form>
</body>
</html>

    */