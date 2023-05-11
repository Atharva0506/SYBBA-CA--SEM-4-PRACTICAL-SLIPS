//SLip 5a

var buf1 = Buffer.from("Hello");
var buf2 = Buffer.from("World");
var buf3 = Buffer.from("SYBBA-CA");
var list = [buf1, buf2, buf3];
var newbuff = Buffer.concat(list);
console.log("The concatenated buffer:");
console.log(newbuff);
var buf4 = Buffer.from("s");
var buf5 = Buffer.from("s");
var buf6 = Buffer.from("t");
var combuf = Buffer.compare(buf4, buf5);
console.log("buf4 compared with buf5 is " + combuf);
var combuf = Buffer.compare(buf4, buf6);
console.log("buf4 compared with buf6 is " + combuf);
var buf7 = Buffer.from('This is new subject : ');
var buf8 = Buffer.from('SYBCA');
buf8.copy(buf7, 2);
console.log(buf7.toString());