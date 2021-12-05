let arr = ["S", "E"];
let production = ["we", "ef"];
const obj = {
    a:["sff", "fef"],
    b: ["dvv", "dsf"],
    [arr[1]]: production
}

let val = "avbv";
obj.a[arr[0]] = production;
obj.a = "ffa";

console.log(obj);
if(val in obj){
    console.log("Obj has a");
}
