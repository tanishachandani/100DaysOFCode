// OBJECTS {}
// key:value pairs
// objects have properties 
// eg: I am a person. I have a name which is my property. 
const person = {
    name: 'Tanisha',
    age: 19,
    location: 'Indore',
}
// calling or accessing objects:
// dot notation vs bracket notation
console.log(person.name)
console.log(person['name']) 

// assigning a property to an object: 
// object.property = value
person.email = 'tanishachandani119@gmail.com'
console.log(person)  // will show all properties of the object

// a function that introduces the person
// const introduction = (person) => {
//     const greet = (`Hey, my name is ${person.name}. I am a ${person.age} year old and I live in ${person.location}.`)
//     return greet
// }
// console.log(introduction(person))


// METHODS
// a method is an object's property which contains a function

// let's add a method to the person object which gives you their networth

person.assests = 100000
person.liabilities = 30000
person.networth = function(){
    networth = person.assests - person.liabilities
    return networth
}
console.log(person.networth()) 

// let's update the introduction:
const introduction = (person) => {
    const intro = (`Hey, my name is ${person.name}. I am a ${person.age} year old and I live in ${person.location} and my networth is $${person.networth()}.`)
    return intro
}
console.log(introduction(person))