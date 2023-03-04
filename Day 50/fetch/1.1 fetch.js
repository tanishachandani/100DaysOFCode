// 1.1: fetch() - working with Data and APIs in javascript
// fetch is a function in javascript, which lets you GET (through APIs) and POST information on the server
// fetch works with promises
// promises are used to handle asynchronus events in javascript

// first, request data with fetch function
// now, promises have a .then method which handles the response you get

// 01 - let's create a simple fetch function which fetches an image from our system locally
console.log("Rainbow loading");
fetch("rainbow.jpg")
  .then((response) => {
    console.log(response);
    return response.blob(); // .blob is a built in method
  })
  .then((blob) => {
    console.log(blob);
    document.getElementById("rainbow").src = URL.createObjectURL(blob);
  })
  .catch((error) => {
    console.log(error);
    alert("Error with the first image!");
  });

// 02 - using ES6 async and await for the same but a tree image
// creating the async function
async function getTree() {
  const tree = await fetch("tree.jpg");
  const blobTree = await tree.blob();
  document.getElementById("tree").src = URL.createObjectURL(blobTree);
  console.log("works yay tree");
}
// calling the function, and, catching errors
getTree().catch((error) => {
  console.log(error);
  alert("Error with the second image!");
});
