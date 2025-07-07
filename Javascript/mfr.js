let a = [2,6,8,11,26,7]
// let newArr=[]
// for (let index = 0; index < a.length; index++) {
//     const element = a[index];
//     newArr.push(element**2)
    
// }
// let newArr= a.map((e)=>{
// return e**2
// })
// console.log(newArr)
// // FILTER

const greaterThanSeven=(e)=>{
    if(e>7){return true
    }

return false}
    console.log(a.filter(greaterThanSeven))
    // REDUCE METHOD
    let arr2 = [1,2,3,4,5]
    const red = (a,b)=>{
        return a*b;
    }
    console.log(arr2.reduce(red))
