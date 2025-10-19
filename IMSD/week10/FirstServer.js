const http = require('http');
const server = http.createServer((req, res) => {
  res.writeHead(200, { 'Content-Type': 'text/plain' });
  res.end('</ol>');
});
  res.write('<h1> WorkFlow of Javascript code execution in Node js </h1>');
  res.write('<ol>');
  res.write('<li> Node js is a runtime environment for executing JavaScript code outside the browser. </li>');
  res.write('<li> It uses the V8 JavaScript engine developed by Google, which is also used in the Chrome browser. </li>');
const PORT = 3000;
server.listen(PORT , () =>
{
  console.log(`Server runnning at http://localhost:${PORT}`);
});

