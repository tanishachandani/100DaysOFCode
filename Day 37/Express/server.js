// express is a framework very specific for some usecases of node which helps reduce repition of code
// node can be used to access the system's hardware whereas express does the same but it's tailored specifically for web development.
// after installation, we require express

const express = require("express");
const app = express();

// creating a server at 3000 port
// to visit our created sever, we search localhost:3000 (bec we're hosting locally and the port we've assigned is 3000)

app.listen(3000, function () {
  console.log("Server started on port 3000.");
});

// app.get() gets whatever we give as parameter when the sever is called.
// app.get(where to send the data, what to send)
// "/" = route for our locally hosted server
// function (request, response) is what's called when we run our server

app.get("/", function (req, res) {
  res.send("<h3>HEYYY, we're creating our first server yaayy!</h3>");
});

app.get("/cats", function (req, res) {
  res.send(
    "Cats are my favourite! They're total dopamine packages. ( ⓛ ﻌ ⓛ *)"
  );
});

app.get("/contact-me", function (req, res) {
  res.send(
    "<ul><li>Phone: +91 7974042497 </li><li>Email: tanisha@gmail.com </li><li>Linkedin: tanishachandani</Li>"
  );
});
