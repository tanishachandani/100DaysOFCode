// FOR LOOPS
// syntax: 
// for (initialization; condition; updation){
//     condition 
//     condition
// }

let fruits = ['🍇','🍈','🍉','🍊','🍋','🍐','🍎','🥭','🍍']

for (let i=0; i<fruits.length; i++){
    console.log(fruits[i])
}

// better syntax:
// for (const item of array) {
//     condition
//     condition
// }

for (const fruit of fruits){
    console.log(fruit)
}

// Q: arr = [0,2,4,8,10]. Create a new array where the value of elements is double. Print the new array.
let arr = [0,2,4,8,10]
newArr = []
for (let item of arr){
    newArr.push(item*2)
}
console.log(newArr) 

// Q: create a function called "double" which takes an array as input and outputs an array with with the elements doubled
const double = (numbers) => {
    let result = []
    for (let item of numbers){
        result.push(item*2)
    }
    console.log(result)
}
double([5,10,15,20,25])   // calling the function
double([0,8,16,4,52])    

// Q: create a function to count the number of characters in a string
const numberOfCharacters = (string) => {
    for (let i = 1; i<= string.length; i++){
        if (i == string.length){
            console.log(`Number of characters in your string are ${i}.`)
        }
    }
}
numberOfCharacters('Hi, my name is Tanisha.')
numberOfCharacters("I'm a CSE undergrad") 