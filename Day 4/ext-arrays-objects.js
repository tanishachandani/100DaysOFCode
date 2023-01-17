// playing around some more with arrays and objects

// Q: Create a function which gives out the biggest item in a given array.
// function
const max = (arr) => {
    let result = arr[0]
    for (let i=1; i<arr.length; i++){
        if (arr[i]>result){
            result = arr[i]
        } 
    }
    console.log(`Max: ${result}`) 
}
// calling the function
max([1,2,3,4,5]) 
max([5,9,7,2,3,10,4]) 


// Q: Create a function which counts the number of times a character occurred in a string
// function
const charFrequency = (phrase) => { 
    let freq = {}
    for (let letter of phrase){
        if (letter in freq){
            freq[letter] ++
        }
        else{
            freq[letter] = 1
        }
    }
    return freq
} 
// calling the function
console.log(charFrequency('hahaha lmao XD')) 


// Q: Create a function which counts the number of times a word occurred in a string
// function
const wordFrequency = (phrase) => {
    let freq = {}
    
    // words are separated by spaces, so, we are going to do phrase.split(' ') which then
    // converts our phrase into an array of words
    phrase = phrase.split(' ')

    for (let word of phrase){
        if (word in freq){
            freq[word] += 1
        }
        else{
            freq[word] = 1
        }
    }
    return freq
}
//calling the function
console.log(wordFrequency("hey hey hey how have you been ?"))  // { hey: 3, how: 1, have: 1, you: 1, been: 1, '?': 1 }