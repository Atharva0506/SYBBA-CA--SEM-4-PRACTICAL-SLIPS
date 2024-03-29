const { check, validationResult }
    = require('express-validator');
const bodyparser = require('body-parser')
const express = require("express")
const path = require('path')
const app = express()
var PORT = process.env.port || 3000
// View Engine Setup
app.set("views", path.join(__dirname))
app.set("view engine", "ejs")
// Body-parser middleware
app.use(bodyparser.urlencoded({ extended: false }))
app.use(bodyparser.json())
app.get("/", function (req, res) {
    res.render("SampleForm");
})
// check() is a middleware used to validate
// the incoming data as per the fields
app.post('/saveData', [
    check('email', 'Email length should be 10 to 30 characters').isEmail().isLength({
        min: 10, max:
            30
    }),
    check('name', 'Name length should be 10 to 20 characters').isLength({ min: 10, max: 20 }),
    check('mobile', 'Mobile number should contains 10 digits').isLength({ min: 10, max: 10 }),
    check('password', 'Password length should be 8 to 10 characters').isLength({
        min: 8, max: 10
    })
], (req, res) => {
    // validationResult function checks whether
    // any occurs or not and return an object
    const errors = validationResult(req);
    // If some error occurs, then this
    // block of code will run
    if (!errors.isEmpty()) {
        res.json(errors)
    }
    // If no error occurs, then this
    // block of code will run
    else {
        res.send("Successfully validated")
    }
});
app.listen(PORT, function (error) {
    if (error) throw error
    console.log("http://127.0.0.1:3000 Server created Successfully on PORT ", PORT)
})

/* SampleForm .ejs 

<!DOCTYPE html>
<html>

<head>
    <title>Validation using Express-Validator</title>
</head>

<body>
    <h1>Student Registration Form</h1>
    <form action="saveData" method="POST">
        <pre>
Enter student Email : <input type="text" name="email"> <br>
Enter student Name : <input type="text" name="name"> <br>
Enter student Number : <input type="number" name="mobile"> <br>
Enter student Password : <input type="password" name="password"> <br>
<input type="submit" value="Submit Form">
</pre>
    </form>
</body>

</html>




*/