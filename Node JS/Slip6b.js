//SLip6b JS

const mysql = require('mysql2');

// Create connection
const connection = mysql.createConnection({
  host: 'localhost', // Your MySQL host (e.g., localhost)
  user: 'root',      // Your MySQL username
  password: 'root',  // Your MySQL password
});

// Connect to MySQL
connection.connect((err) => {
  if (err) {
    console.error('Error connecting to MySQL:', err);
    return;
  }
  console.log('Connected to MySQL!');

  // Create database
  connection.query('CREATE DATABASE IF NOT EXISTS studentDB', (err) => {
    if (err) {
      console.error('Error creating database:', err);
      return;
    }
    console.log('Database "studentDB" created!');

    // Use database
    connection.query('USE studentDB', (err) => {
      if (err) {
        console.error('Error using database:', err);
        return;
      }
      console.log('Using database "studentDB"');

      // Create table
      const createTableQuery = `
        CREATE TABLE IF NOT EXISTS student (
          roll_no INT PRIMARY KEY,
          name VARCHAR(255) NOT NULL,
          percentage DECIMAL(5, 2) NOT NULL
        )
      `;
      connection.query(createTableQuery, (err) => {
        if (err) {
          console.error('Error creating table:', err);
          return;
        }
        console.log('Table "student" created!');

        // Insert multiple records
        const records = [
          { roll_no: 1, name: 'John Doe', percentage: 90.5 },
          { roll_no: 2, name: 'Jane Smith', percentage: 85.7 },
          { roll_no: 3, name: 'Mike Johnson', percentage: 92.3 }
        ];

        const insertRecordsQuery = 'INSERT INTO student SET ?';
        connection.query(insertRecordsQuery, records, (err, results) => {
          if (err) {
            console.error('Error inserting records:', err);
            return;
          }
          console.log('Records inserted into "student" table!');
          console.log('Result object:', results);

          // Close connection
          connection.end((err) => {
            if (err) {
              console.error('Error closing connection:', err);
              return;
            }
            console.log('Connection closed!');
          });
        });
      });
    });
  });
});
