var randomNumber1 = Math.ceil(Math.random()*6)
var randomNumber2 = Math.ceil(Math.random()*6)

var randomDiceImg1 = "images/" + "dice" + randomNumber1 + ".png"
var randomDiceImg2 = "images/" + "dice" + randomNumber2 + ".png"

document.querySelectorAll("img")[0].setAttribute("src", randomDiceImg1)
document.querySelectorAll("img")[1].setAttribute("src", randomDiceImg2)

var whoWon = document.querySelector('h1')

if (randomNumber1>randomNumber2){
    whoWon.innerText = "Player 1 won!"
}
else if (randomNumber1 == randomNumber2){
    whoWon.innerText = "It's a draw!"
}
else{
    whoWon.innerText = "Player 2 won!"
} 