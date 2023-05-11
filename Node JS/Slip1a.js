//1a. Create a Node.js file that will convert the output "Hello World!" into
//    upper-case letters.



// ------------ 1. First install upper-case module
//---------------- 2. C:\Users\Your Name>npm upper-case
var http = require('http');
var uc = require('upper-case');
http.createServer(function (req, res) {
    res.writeHead(200, { 'Content-Type': 'text/html' });
    res.write(uc.upperCase("Hello World!"));
    res.end();
}).listen(8080);
console.log('Server running at http://127.0.0.1:8080/');