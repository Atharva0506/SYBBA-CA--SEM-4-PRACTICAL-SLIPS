//3a. Create a Node.js Application that uses
//    user defined module circle.js which exports functions area() and
//    circumference() and display details on console.

/* 
-----------------Circle.js-----------------
var circle = {
    area: function (r) {
        var pi = 3.14, a;
        a = pi * r * r;
        console.log('area of circle is:' + a);
    },
    circumference: function (r) {
        var pi = 3.14, c;
        c = 2 * pi * r;
        console.log('circumference of circle is:' + c);
    }
};
module.exports = circle
*/ 

const myMod=require('./My modules/Circle.js');
myMod.area(5);
myMod.circumference(5);