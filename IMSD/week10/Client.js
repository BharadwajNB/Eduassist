// Simple HTTP client that requests the server above

const http = require('http');

// Options for the HTTP request
const options = {
  hostname: 'localhost',
  port: 3000,
  path: '/',
  method: 'GET'
};

// Send a request
const req = http.request(options, (res) => {
  console.log(`Status Code: ${res.statusCode}`);

  // Collect data
  res.on('data', (chunk) => {
    console.log('Data received from server: ' + chunk.toString());
  });

  // When the response ends
  res.on('end', () => {
    console.log('No more data from server.');
  });
});

// Handle errors
req.on('error', (error) => {
  console.error(`Error: ${error.message}`);
});

// End the request
req.end();