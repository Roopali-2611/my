let n = (prompt("enter the number to find factorial"))
let arr = []
for (let i = 1; i <= n; i++) {
    arr.push(i);
    
}
     const red = (a,b)=>{
        return a*b;
    }
    console.log( arr.reduce(red))
