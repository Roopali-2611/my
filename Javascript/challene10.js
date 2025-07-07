/*QUESTION: 
advectives:
fire
crazy
amazing

second word:
engine 
food 
garments

third word:
hub
bro
limitd*/
// here we are going to solve this problem using random i wasn't able to crack it but we need to do it this way using rabdom variable i am actually confused i wasn't able to think of an effective approach to this question
let random1 = Math.random()
if(random1<0.33){
    first="amazing"
}
else if(random1<0.66 && random1>0.33){
    first="crazy"
}
else{
    first="fire"
}



let random2 = Math.random()
if(random2<0.33){
    second="engine"
}
else if(random2<0.66 && random2>0.33){
    second="garmets"
}
else{
    second="food"
}



let random3 = Math.random()
if(random3<0.33){
    third="bro"
}
else if(random3<0.66 && random3>0.33){
    third="hub"
}
else{
    third="limited"
}
final=first . concat(second ,third)
console.log("the name of your company is:"+final);
