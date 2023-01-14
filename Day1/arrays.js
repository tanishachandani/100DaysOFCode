// ARRAYS []
// const/let arrayName = []
const fruits = ['🍎','🍓','🍇','🍍']
console.log(fruits)
console.log(fruits[1]) 
console.log(fruits[0])
console.log(fruits[2]+fruits[3]) 

// ARRAY METHODS (push, slice, indexOf, length)

// ARRAY PUSH 
// adds item to the array
// arrayName.push(item)
fruits.push('🍏')
console.log(fruits)

// ARRAY SLICE
// arrayName.slice(range)
console.log(fruits.slice(0,3))  // from 0 (inclusive) up to 3 (3 excluded) // [ '🍎', '🍓', '🍇' ]
