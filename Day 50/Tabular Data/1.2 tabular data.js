// tip: work with a smaller chunk of the data first to make sure everything works
// when working with csv data, we fetch the data as text, parse it and then use it for whatever purposes
// parsing of data is basically conversion of data from one format to another
// parsing is done to make unreadable data more comprehensible

const dates = [];
const cities = [];

var ctx = document.getElementById("graph").getContext("2d");

async function getData() {
  const response = await fetch("scrubbed.csv");
  const data = await response.text();

  // to split each row of the data, we use the .split() method.
  // in our data, rows are separated by new line which is \n, so:
  // also, we want data from index 1 (index 0 is column headers which humans need but our system doesn't), hence, we .slice(1) it.

  const table = data.split("\n").slice(1);

  table.forEach((row) => {
    const columns = row.split(",");
    const dateAndTime = columns[0];
    dates.push(dateAndTime);

    const city = columns[1];
    cities.push(city);
    console.log(dateAndTime, city);
  });
}
