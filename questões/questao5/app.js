let myString = "Eu sou uma string!"

console.log(myString)

let newString = []
myString = myString.split('')
console.log(myString)

for(let i=0;i<myString.length;i++){
    newString.unshift(myString[i]);
}
newString = newString.join("");

console.log(newString); // => !gnirts amu uos uE