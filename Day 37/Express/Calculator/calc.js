const express = require("express");
const app = express();

const bodyParser = require("body-parser");
// lets you pass the data you get on the client side to the server
// body parser works with express
app.use(bodyParser.urlencoded({ extended: true })); // url encoded lets you pass the data from html forms

app.listen("5000", function () {
  console.log("It's currently running at port 5000.");
});

app.get("/", function (req, res) {
  res.sendFile(__dirname + "/index.html");
});

app.post("/", function (req, res) {
  var num1 = Number(req.body.num1);
  var num2 = Number(req.body.num2);
  var result = num1 + num2;
  res.send("Result is " + result);
});

app.get("/bmicalculator", function (req, res) {
  res.sendFile(__dirname + "/bmiCalculator.html");
});

app.post("/bmicalculator", function (req, res) {
  var weight = Number(req.body.weight);
  var height = Number(req.body.height);
  var hsq = height * height;
  var bmi = weight / hsq;

  //   res.send("Your BMI is " + bmi);

  if (bmi < 18.5) {
    res.send("Your BMI is " + bmi + ". You're under weight.");
  } else if (bmi >= 18.5 && bmi <= 24.9) {
    res.send("Your BMI is " + bmi + ". You're normal.");
  } else if (bmi >= 25 && bmi <= 29.9) {
    res.send("Your BMI is " + bmi + ". You're over weight.");
  } else {
    res.send("Your BMI is " + bmi + ". You're obese.");
  }
});
