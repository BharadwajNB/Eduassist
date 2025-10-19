// Simple HTTP server using Node's http module

const http = require('http');

// Create a server
const server = http.createServer((req, res) => {
  // Set response header
  res.writeHead(200, { 'Content-Type': 'text/plain' });
  // Send data (response body)
  res.write('Hello! This is data transferred over HTTP protocol.\n');
  res.write('Node.js server is sending this response using http module.');
  // End the response
  res.end();
});

// Define port
const PORT = 3000;

// Start the server
server.listen(PORT, () => {
  console.log(`Server running at http://localhost:${PORT}/`);
});