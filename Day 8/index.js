// slice(x,y): allows you to slice your strings to separate them into individual parts
// from x upto y but not including y. basically in terms of math: [x,y)

var myName = 'Tanisha'
console.log(myName.slice(0,4)) 

var input = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam dictum fermentum sapien ut auctor. Phasellus dolor massa, aliquet id libero vel, interdum volutpat ante. Aenean nec quam nisl. Proin vel libero quis nulla faucibus facilisis. Nam posuere tempor semper. In at sollicitudin leo. Vestibulum suscipit turpis maximus magna laoreet venenatis."
console.log(input.slice(0,40))

var yourName = 'tanishahahahah'
console.log((yourName.slice(0,1).toUpperCase())+(yourName.slice(1,yourName.length))) 


// array methods: arr.includes() arr.push() arr.pop() 


// random number generation
// dice roll generator
var random = Math.random()
random *= 6
var dice = Math.ceil(random)
console.log(dice) 


// leap-year calculator: 
function isLeap(year) {
    if (year%4==0){
        if (year%100==0){
            if(year%400==0){
                return "Leap year."
            }
            else{
                return "Not leap year."
            }
        }
        else{
            return "Leap year."
        }
    }
    else{
        return "Not leap year."
    }
}


// fibonacci series
function fibonacciGenerator (n) {
    let arr = []
    
    if (n==1){
        arr.push(0)
    }
    else if (n==2){
        arr.push(0)
        arr.push(1)
    }
    else if (n>2) {
        arr.push(0)
        arr.push(1)
        
        for (var i = 2; i<n; i++){
            arr[i] = arr[i-1] + arr[i-2]
        }
    }
    return arr
}