'use strict';
// week10_10b.JS
// Run as server: node week10_10b.JS server
// Run as client: node week10_10b.JS client

const http = require('http');

const PORT = 3000;

function startServer() {
  const server = http.createServer((req, res) => {
    res.writeHead(200, { 'Content-Type': 'text/plain' });
    res.write('Hello! This is data transferred over HTTP protocol.\n');
    res.write('Node.js server is sending this response using http module.');
    res.end();
  });

  server.listen(PORT, () => {
    console.log(`Server running at http://localhost:${PORT}/`);
  });

  // Graceful shutdown on Ctrl+C
  process.on('SIGINT', () => {
    console.log('\nShutting down server...');
    server.close(() => {
      console.log('Server stopped.');
      process.exit(0);
    });
    // Force exit after 3s if not closed
    setTimeout(() => process.exit(1), 3000);
  });
}

function runClient() {
  const options = {
    hostname: 'localhost',
    port: PORT,
    path: '/',
    method: 'GET',
    timeout: 5000 // 5s timeout
  };

  const req = http.request(options, (res) => {
    console.log(`Status Code: ${res.statusCode}`);
    let data = '';
    res.on('data', (chunk) => {
      data += chunk.toString();
    });
    res.on('end', () => {
      console.log('Data received from server:\n' + data);
      console.log('No more data from server.');
    });
  });

  req.on('error', (error) => {
    console.error(`Request error: ${error.message}`);
  });

  req.on('timeout', () => {
    console.error('Request timed out.');
    req.abort();
  });

  req.end();
}

function printUsageAndExit() {
  console.log('Usage:');
  console.log('  node week10_10b.JS server    # start the server on port 3000');
  console.log('  node week10_10b.JS client    # send one request to local server');
  process.exit(1);
}

const mode = (process.argv[2] || '').toLowerCase();
if (mode === 'server') {
  startServer();
} else if (mode === 'client') {
  runClient();
} else {
  printUsageAndExit();
}
