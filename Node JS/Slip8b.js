//8b

const express = require('express');
const bodyParser = require('body-parser');

const app = express();
app.use(bodyParser.urlencoded({ extended: true }));

// Serve the registration form
app.get('/', (req, res) => {
  res.send(`
    <html>
      <body>
        <h1>Student Registration</h1>
        <form method="POST" action="/register">
          <label for="firstName">First Name:</label>
          <input type="text" id="firstName" name="firstName" required><br><br>
          <label for="lastName">Last Name:</label>
          <input type="text" id="lastName" name="lastName" required><br><br>
          <label for="age">Age:</label>
          <input type="number" id="age" name="age" required><br><br>
          <input type="submit" value="Register">
        </form>
      </body>
    </html>
  `);
});

// Handle the registration form submission
app.post('/register', (req, res) => {
  const firstName = req.body.firstName;
  const lastName = req.body.lastName;
  const age = parseInt(req.body.age);

  // Validate first name, last name, and age
  if (!isAlpha(firstName) || !isAlpha(lastName)) {
    return res.send('First name and last name should only contain alphabets!');
  }

  if (age < 6 || age > 25) {
    return res.send('Age should be between 6 and 25!');
  }

  // If all validations pass, display the registration details
  res.send(`
    <html>
      <body>
        <h1>Registration Successful</h1>
        <p>First Name: ${firstName}</p>
        <p>Last Name: ${lastName}</p>
        <p>Age: ${age}</p>
      </body>
    </html>
  `);
});

// Helper function to check if a string contains only alphabets
function isAlpha(str) {
  return /^[A-Za-z]+$/.test(str);
}

// Start the server
const port = 3000;
app.listen(port, () => {
  console.log(`Server running on port ${port}`);
});
