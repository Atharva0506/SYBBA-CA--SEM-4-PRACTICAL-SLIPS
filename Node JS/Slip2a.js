// 2.Create a Node.js Application that uses a user defined module to
//   return the factorial of a given number.

/* 
-----------------fact.js-----------------
var fact={
factorial: function(n)
{
var f=1,i;
for(i=1;i<=n;i++)
{ 
    f=f*i;
}
console.log('factorial of '+n+' is:'+f);}};
module.exports=fact
*/

const  myMod = require('./My modules/fact.js');
myMod.factorial(5);