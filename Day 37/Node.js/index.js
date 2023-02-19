// fs = file system
const fs = require("fs");

// to copy contents of a file to another
// the command below: creates file2.txt and syncs the content of file1 to file2.
// if file2.txt already existed with some other content, it will replace that with contents of file1.txt
fs.copyFileSync("file1.txt", "file2.txt");

// using the external npm module in our node (superhero-name-library)
const superhero = require("superhero-name-library");

var mySuperhero1 = superhero.random();
var mySuperhero2 = superhero.getSuperHeroById(482);
var mySuperhero3 = superhero.getByInitialLetter("I");
var mySuperhero4 = superhero.allNames(10);

console.log(mySuperhero1);
console.log(mySuperhero2);
console.log(mySuperhero3);
console.log(mySuperhero4);
