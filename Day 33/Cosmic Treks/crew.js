var doug = document.getElementById("doug");
var mark = document.getElementById("mark");
var victor = document.getElementById("victor");
var ansari = document.getElementById("ansari");


// DOUG
function crewDoug(){
    document.getElementById("position").innerText = "COMMANDER";
    document.getElementById("name").innerText = "DOUGLAS HURLEY";
    document.getElementById("experience").innerText = "Douglas Gerald Hurley is an American engineer, former Marine Corps pilot and former NASA astronaut. He launched into space for the third time as commander of Crew Dragon Demo-2.";
    document.getElementById("crew-image").src = "image/doug-crew.png"
}
doug.addEventListener("click",crewDoug);


// MARK
function crewMark(){
    document.getElementById("position").innerText = "Mission Specialist ";
    document.getElementById("position").style.width = "350px";
    document.getElementById("name").innerText = "MARK SHUTTLEWORTH";
    document.getElementById("name").style.width = "550px";
    document.getElementById("experience").innerText = "Mark Richard Shuttleworth is the founder and CEO of Canonical, the company behind the Linux-based Ubuntu operating system. Shuttleworth became the first South African to travel to space as a space tourist.";
    document.getElementById("crew-image").src = "image/mark-crew.png"
}
mark.addEventListener("click",crewMark);


// VICTOR
function crewVictor(){
    document.getElementById("position").innerText = "PILOT";
    document.getElementById("name").innerText = "Victor Glover";
    document.getElementById("experience").innerText = "Pilot on the first operational flight of the SpaceX Crew Dragon to the International Space Station. Glover is a commander in the U.S. Navy where he pilots an F/A-18.He was a crew member of Expedition 64, and served as a station systems flight engineer.";
    document.getElementById("crew-image").src = "image/victor-crew.png"
}
victor.addEventListener("click",crewVictor);


// ANSARI
function crewAnsari(){
    document.getElementById("position").innerText = "Flight Engineer";
    document.getElementById("name").innerText = "Anousheh Ansari";
    document.getElementById("experience").innerText = "Anousheh Ansari is an Iranian American engineer and co-founder of Prodea Systems. Ansari was the fourth self-funded space tourist, the first self-funded woman to fly to the ISS, and the first Iranian in space.";
    document.getElementById("crew-image").src = "image/ansari-crew.png"
}
ansari.addEventListener("click",crewAnsari);
