
function identify(string){
    
let reg = /[+-/*=]/g;
let str = string.replace(" ", "");
let identifiersReg =/[A-Z]/i;
let numReg =/[0-9]/ig;
let special =/[@'$#]/;
let result= str.split(reg);
console.log(result);
let identifiers =[];
let numbers =[];
let specialCase = [];

    result.forEach( e=>{
        if(identifiersReg.test(e)==true){
            identifiers.push(e);
        }
        if(numReg.test(e)){
            numbers.push(e);
        }
        if(special.test(e)){
            specialCase.push(e);
        }
    });


    console.log("Identifiers are:");
    console.log(identifiers);
    console.log("Numbers are:");
    console.log(numbers);
    console.log("Operators are:");
    console.log(str.match(reg));
    console.log("Special operators are:");
    console.log(specialCase);
    findDuplicates(result);

}
    

function findDuplicates(arr) {
    //const arry = [1, 2, 1, 3, 4, 3, 5];

const toFindDuplicates = arry => arry.filter((item, index, arry) => arry.indexOf(item) !== index)
const duplicateElements = toFindDuplicates(arr);
console.log("Duplicates elements are : "+duplicateElements);

}

identify("result =a'+b'-a'-c+d*10+$");