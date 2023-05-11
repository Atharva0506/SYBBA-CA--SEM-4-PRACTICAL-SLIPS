//Slip6a

var fs = require("fs");
// Asynchronous - Opening File
console.log("Going to open file!");
fs.open('quotes/quotes.txt', 'r+', function (err, fd) {
    if (err) {
        return console.error("404" + err);
    }
    console.log("File opened successfully!");
});
