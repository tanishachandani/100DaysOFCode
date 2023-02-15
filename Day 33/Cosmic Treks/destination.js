// TO MOON
var moon = document.querySelector("#to-moon");
function toMoon(){
    document.getElementById("chosen-destination").innerText = "MOON";
    document.getElementById("destination-subtext").innerText = "See our planet as you’ve never seen it before. A perfect relaxing trip away to help regain perspective and come back refreshed. While you’re there, take in some history by visiting the Luna 2 and Apollo 11 landing sites.";
    document.querySelector("#dist .value").innerText = "384,000 KM";
    document.querySelector("#time .value").innerText = "3 DAYS";
    document.getElementById("img").src = "image/image-moon.png";
}
moon.addEventListener("click", toMoon);


// TO MARS
var mars = document.querySelector("#to-mars");
function toMars(){
    document.getElementById("chosen-destination").innerText = "MARS";
    document.getElementById("destination-subtext").innerText = "Don’t forget to pack your hiking boots. You’ll need them to tackle Olympus Mons, the tallest planetary mountain in our solar system. It’s two and a half times the size of Everest!"
    document.querySelector("#dist .value").innerText = "225 MIL. KM";
    document.querySelector("#time .value").innerText = "9 MONTHS";
    document.getElementById("img").src = "image/image-mars.png";
}
mars.addEventListener("click", toMars);


// TO EUROPA
var europa = document.querySelector("#to-europa");
function toEuropa(){
    document.getElementById("chosen-destination").innerText = "EUROPA";
    document.getElementById("destination-subtext").innerText = "The smallest of the four Galilean moons orbiting Jupiter, Europa is a winter lover’s dream. With an icy surface, it’s perfect for a bit of ice skating, curling, hockey, or simple relaxation in your snug wintery cabin.";
    document.querySelector("#dist .value").innerText = "628 MIL. KM";
    document.querySelector("#time .value").innerText = "3 YEARS";
    document.getElementById("img").src = "image/image-europa.png";
}
europa.addEventListener("click", toEuropa);


// TO SATURN
var saturn = document.querySelector("#to-saturn");
function toSaturn(){
    document.getElementById("chosen-destination").innerText = "SATURN";
    document.getElementById("destination-subtext").innerText = "Embark on a journey to the stunning rings of Saturn, a mesmerizing wonder of our solar system. Witness the beauty of its multi-colored bands and explore the diverse moons that orbit around it.";
    document.querySelector("#dist .value").innerText = "1,200 MIL. KM";
    document.querySelector("#time .value").innerText = "7 YEARS";
    document.getElementById("img").src = "image/Untitled_design__2_-removebg-preview.png";
    document.getElementById("img").style.width = "445px";
    document.getElementById("img").style.height = "445px";
}
saturn.addEventListener("click", toSaturn);