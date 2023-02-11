var drums = document.querySelectorAll(".drum");

for (var i=0; i<(drums.length); i++){

    var drumIndex = drums[i];
    
    if (drumIndex.innerHTML == 'w'){
        drumIndex.addEventListener("click",function(){
            var audio = new Audio('sounds/tom-1.mp3');
            audio.play()
        })
    }

    else if (drumIndex.innerHTML == 'a'){
        drumIndex.addEventListener("click",function(){
            var audio = new Audio('sounds/tom-2.mp3');
            audio.play()
        })
    }

    else if (drumIndex.innerHTML == 's'){
        drumIndex.addEventListener("click",function(){
            var audio = new Audio('sounds/tom-3.mp3');
            audio.play()
        })
    }

    else if (drumIndex.innerHTML == 'd'){
        drumIndex.addEventListener("click",function(){
            var audio = new Audio('sounds/tom-4.mp3');
            audio.play()
        })
    }

    else if (drumIndex.innerHTML == 'j'){
        drumIndex.addEventListener("click",function(){
            var audio = new Audio('sounds/snare.mp3');
            audio.play()
        })
    }

    else if (drumIndex.innerHTML == 'k'){
        drumIndex.addEventListener("click",function(){
            var audio = new Audio('sounds/crash.mp3');
            audio.play()
        })
    }

    else if (drumIndex.innerHTML == 'l'){
        drumIndex.addEventListener("click",function(){
            var audio = new Audio('sounds/kick-bass.mp3');
            audio.play()
        })
    }
}

// for keydown

document.addEventListener('keydown',function(key){
    switch(key.key){
        case "w":
            var audio = new Audio('sounds/tom-1.mp3');
            audio.play()
        case 'a':
            var audio = new Audio('sounds/tom-2.mp3');
            audio.play()
        case 's':
            var audio = new Audio('sounds/tom-3.mp3');
            audio.play()
        case 'd':
            var audio = new Audio('sounds/tom-4.mp3');
            audio.play()
        case 'j':
            var audio = new Audio('sounds/snare.mp3');
            audio.play()
        case 'k':
            var audio = new Audio('sounds/crash.mp3');
            audio.play()
        case 'l':
            var audio = new Audio('sounds/kick-bass.mp3');
            audio.play()
    }
})