//Slip14a. Create a Node.js application to search particular word in
//         fille and display result on console.

/*
-----------------quotes.txt-----------------
       ===== No Need to write =====
“Be yourself; everyone else is already taken.”
― Oscar Wilde

“Two things are infinite: the universe and human stupidity; and I'm not sure about the universe.”
― Albert Einstein

*/

var fs = require('fs');
fs.readFile('./quotes/quotes.txt', function (err, data) {
    if (err) throw err;
    if (data.includes('Albert Einstein')) {
        console.log(data.toString())
    }
    else {
        console.log('word not found');
    }
});