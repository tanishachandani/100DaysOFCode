// DOM Manipulation

// document.getElementById
let title = document.getElementById('title')

let message = 'Hey, how have you been?'
title.innerHTML = `<p>${message}</p>`
title.style.color = 'blue'

// excercise to understand onClick 

let redDiv = document.getElementById('red')
redDiv.onclick = () => {document.getElementById('result').innerText = "You clicked red"}

let greenDiv = document.getElementById('green')
greenDiv.onclick = () => {document.getElementById('result').innerText = "You clicked green"}

let blueDiv = document.getElementById('blue')
blueDiv.onclick = () => {document.getElementById('result').innerText = "You clicked blue"} 