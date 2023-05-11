//Slip7a 

const fs = require('fs');
console.log('File Reading from file1.txt ..........');
fs.readFile('quotes/quotes.txt', 'utf8', readingFile);
function readingFile(error, data) {
    if (error) {
        console.log(error);
    } else {
        console.log(data);
        fs.appendFile('quotes/quotes2.txt', data, 'utf8', writeFile);
    }
}
function writeFile(error) {
    if (error) {
        console.log(error)
    } else {
        console.log('Content of quotes/quotes.txt has been pasted to file2.txt file');
    }
}