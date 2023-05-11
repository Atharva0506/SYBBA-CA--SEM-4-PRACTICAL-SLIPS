//SLip 1b


const mysql = require('mysql2');

// Create connection
const connection = mysql.createConnection({
  host: 'localhost', 
  user: 'root',      
  password: 'root',  
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

        // Insert records
        const insertRecordsQuery = `
          INSERT INTO student (roll_no, name, percentage)
          VALUES
            (1, 'John Doe', 90.5),
            (2, 'Jane Smith', 85.7),
            (3, 'Mike Johnson', 92.3)
        `;
        connection.query(insertRecordsQuery, (err) => {
          if (err) {
            console.error('Error inserting records:', err);
            return;
          }
          console.log('Records inserted into "student" table!');

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
