var launch = document.getElementById("one");
var port = document.getElementById("two");
var capsule = document.getElementById("three");

// default case
launch.style.backgroundColor = "white";
launch.style.color = "black";
launch.style.fontWeight = "bold";

port.style.backgroundColor = "transparent";
port.style.color = "white";

capsule.style.backgroundColor = "transparent";
capsule.style.color = "white";

// ONE: LAUNCH VEHICLE
function one(){
    document.getElementById("tool").innerText = "LAUNCH VEHICLE";
    document.getElementById("tool-description").innerText = "A launch vehicle or carrier rocket is a rocket-propelled vehicle used to carry a payload from Earth's surface to space, usually to Earth orbit or beyond. Our WEB-X carrier rocket is the most powerful in operation. Standing 150 metres tall, it's quite an awe-inspiring sight on the launch pad!";
    document.getElementById("tool-image").src = "image/launch-image.jpg";

    launch.style.backgroundColor = "white";
    launch.style.color = "black";
    launch.style.fontWeight = "bold";

    port.style.backgroundColor = "transparent";
    port.style.color = "white";

    capsule.style.backgroundColor = "transparent";
    capsule.style.color = "white";
}
launch.addEventListener("click",one);


// TWO: SPACEPORT
function two(){
    document.getElementById("tool").innerText = "SPACEPORT";
    document.getElementById("tool-description").innerText = "A spaceport or cosmodrome is a site for launching (or receiving) spacecraft, by analogy to the seaport for ships or airport for aircraft. Based in the famous Cape Canaveral, our spaceport is ideally situated to take advantage of the Earth’s rotation for launch.";
    document.getElementById("tool-image").src = "image/spaceport-image.jpg";
    
    port.style.backgroundColor = "white";
    port.style.color = "black";
    port.style.fontWeight = "bold";

    launch.style.backgroundColor = "transparent";
    launch.style.color = "white";

    capsule.style.backgroundColor = "transparent";
    capsule.style.color = "white";
}
port.addEventListener("click",two);


// THREE: SPACE CAPSULE
function three(){
    document.getElementById("tool").innerText = "SPACE CAPSULE";
    document.getElementById("tool-description").innerText = "A space capsule is an often-crewed spacecraft that uses a blunt-body reentry capsule to reenter the Earth's atmosphere without wings. Our capsule is where you'll spend your time during the flight. It includes a space gym, cinema, and plenty of other activities to keep you entertained.";
    document.getElementById("tool-image").src = "image/capsule-image.jpg";

    capsule.style.backgroundColor = "white";
    capsule.style.color = "black";
    capsule.style.fontWeight = "bold";

    launch.style.backgroundColor = "transparent";
    launch.style.color = "white";

    port.style.backgroundColor = "transparent";
    port.style.color = "white";
}
capsule.addEventListener("click",three);