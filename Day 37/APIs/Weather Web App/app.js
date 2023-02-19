const express = require("express");
const app = express();

const https = require("https");

app.get("/", function (req, res) {
  res.send(
    "<h1>Weather Forecast</h1><h3>A simple web app I'm creating to understand and apply APIs and express.js</h3>"
  );

  const url =
    "https://api.openweathermap.org/data/2.5/weather?lat=19.076090&lon=72.877426&appid=0b87a1f0ae1507ecc483802f08f72142&units=metric";
  https.get(url, function (response) {
    console.log(response.statusCode);
  });
});

app.listen("3000", function () {
  console.log("It's running!");
});
