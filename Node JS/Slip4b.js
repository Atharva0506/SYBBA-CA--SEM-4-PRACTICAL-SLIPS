//SLip 4b


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
  connection.query('CREATE DATABASE IF NOT EXISTS teacherDB', (err) => {
    if (err) {
      console.error('Error creating database:', err);
      return;
    }
    console.log('Database "teacherDB" created!');

    // Use database
    connection.query('USE teacherDB', (err) => {
      if (err) {
        console.error('Error using database:', err);
        return;
      }
      console.log('Using database "teacherDB"');

      // Create table
      const createTableQuery = `
        CREATE TABLE IF NOT EXISTS teacher (
          ID INT PRIMARY KEY,
          name VARCHAR(255) NOT NULL,
          salary DECIMAL NOT NULL
        )
      `;
      connection.query(createTableQuery, (err) => {
        if (err) {
          console.error('Error creating table:', err);
          return;
        }
        console.log('Table "teacher" created!');

        // Insert records
        const insertRecordsQuery = `
          INSERT INTO teacher (ID, name, salary)
          VALUES
            (1, 'John Doe', 100.0),
            (2, 'Jane Smith', 200.0),
            (3, 'Mike Johnson', 300.0)
        `;
        connection.query(insertRecordsQuery, (err) => {
          if (err) {
            console.error('Error inserting records:', err);
            return;
          }
          console.log('Records inserted into  table!');

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
