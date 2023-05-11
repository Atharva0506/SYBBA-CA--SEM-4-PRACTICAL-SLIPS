//SLip5b

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
  connection.query('CREATE DATABASE IF NOT EXISTS myDB', (err) => {
    if (err) {
      console.error('Error creating database:', err);
      return;
    }
    console.log('Database "myDB" created!');

    // Use database
    connection.query('USE myDB', (err) => {
      if (err) {
        console.error('Error using database:', err);
        return;
      }
      console.log('Using database "myDB"');

      // Create table
      const createTableQuery = `
        CREATE TABLE IF NOT EXISTS customer (
          id INT PRIMARY KEY AUTO_INCREMENT,
          name VARCHAR(255) NOT NULL,
          email VARCHAR(255) NOT NULL
        )
      `;
      connection.query(createTableQuery, (err) => {
        if (err) {
          console.error('Error creating table:', err);
          return;
        }
        console.log('Table "customer" created!');

        // Insert records
        const insertRecordsQuery = `
          INSERT INTO customer (name, email)
          VALUES
            ('John Doe', 'john@example.com'),
            ('Jane Smith', 'jane@example.com'),
            ('Mike Johnson', 'mike@example.com')
        `;
        connection.query(insertRecordsQuery, (err) => {
          if (err) {
            console.error('Error inserting records:', err);
            return;
          }
          console.log('Records inserted into "customer" table!');

          // Select all records
          const selectAllQuery = 'SELECT * FROM customer';
          connection.query(selectAllQuery, (err, results) => {
            if (err) {
              console.error('Error selecting records:', err);
              return;
            }
            console.log('All records from "customer" table:');
            console.log(results);

            // Delete a record
            const deleteRecordQuery = 'DELETE FROM customer WHERE id = ?';
            const recordIdToDelete = 2;
            connection.query(deleteRecordQuery, [recordIdToDelete], (err) => {
              if (err) {
                console.error('Error deleting record:', err);
                return;
              }
              console.log(`Record with id ${recordIdToDelete} deleted from "customer" table!`);

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
  });
});
