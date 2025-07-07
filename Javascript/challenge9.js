// let a = prompt("enter a number :");
// console.log("the number is"+a);
let random = Math.random();
console.log(random);
let a = prompt("enter your first number");
let b = prompt("enter your operation");
let c = prompt("enter your second number");
let object={
    "+":"-",
    "-":"*",
    "*":"+",
}

if(random<0.1){
    b=object[b];

}
else{
    console.log(`the result is; ${eval(`${a} ${b} ${c}`)}`)
}