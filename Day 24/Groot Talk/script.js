var userInput = document.querySelector("#input-text");
var translate_btn = document.querySelector("#translate-btn");
var output = document.querySelector("#output");

var translateIt = async() => {
    var userInputValue = userInput.value;
    var arr = userInputValue == "" ? [] : userInputValue.split(' ');
    var numberOfWords = arr.length;
    var groot = "I am groot.";
    var moreGroot="";

    if (userInputValue == ""){
        output.innerText = "I am groot?";
    }
    else if (numberOfWords<=3){
        output.innerText = groot;
    }
    else{
        for (var i=0; i<(numberOfWords/3); i++){
            moreGroot += " I am groot.";
        }
        console.log(moreGroot)
        output.innerText = moreGroot;
    }
}

translate_btn.addEventListener("click", translateIt) 