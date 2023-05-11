//29 a

/** 
 * rect.js
var rect={
area: function(l,b)
{
var a;
a=l*b;
console.log('area of rectangle is:'+a);
}
};
module.exports=rect
 * 
 */
var mymod=require('./My modules/rect.js');
mymod.area(5,4);