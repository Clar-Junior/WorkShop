let x;
let y;
let z;

/*
console.log(x);
console.log(y);
console.log(z);
*/

document.getElementById("rollButton").onclick = function(){
    x = Math.floor(Math.random() * 8 + 1);
    y = Math.floor(Math.random() * 8 + 1);
    z = Math.floor(Math.random() * 8 + 1);

    document.getElementById("xLabel").innerHTML = x;
    document.getElementById("yLabel").innerHTML = y;
    document.getElementById("zLabel").innerHTML = z;

}