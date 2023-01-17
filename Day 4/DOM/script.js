// DOM Manipulation

// document.getElementById
let title = document.getElementById('title')

let message = 'Hi, this is a simple webpage I made to understand DOM better!'
title.innerHTML = `<p>${message}</p>`
title.style.color = 'blue'

// excercise to understand onClick 

// let redDiv = document.getElementById('red')
// redDiv.onclick = () => {document.getElementById('result').innerText = "You clicked red"}

// let greenDiv = document.getElementById('green')
// greenDiv.onclick = () => {document.getElementById('result').innerText = "You clicked green"}

// let blueDiv = document.getElementById('blue')
// blueDiv.onclick = () => {document.getElementById('result').innerText = "You clicked blue"} 


// a better way to the above: 
// also adding the number of times you click the boxes
const squares = document.querySelectorAll('.colorSquare')
for (let square of squares){
        let count = 0
        square.onclick = () => {
                count += 1
                square.innerText = `${count}`
                document.getElementById('result').innerText = `You clicked ${square.value} ${count} times!`
        } 
} 
let startOver = document.getElementById('startOver')
startOver.onclick = () => {
        for (let square of squares){
                square.innerText = ``
                document.getElementById('result').innerText = `Result`
        }
} 