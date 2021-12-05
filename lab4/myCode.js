// console.log("Please input 2 number: ");
// var num = readline();
// var num1 = readline();
// let myNum =parseInt(num);
// let myNum1 =parseInt(num1);

// console.log(myNum+myNum1);
//console.log(typeof num);
//load("codes/myCode.js")
//result =a'+b'+c+d*10+$
function getidentyifier(str){
    let signrex = /[+-=*/]/g;
    let identifiersReg =/[A-Z]/ig;
    let special =/[@'$#]/g;
    let numReg =/[0-9]/ig;
    let arr = str.split(signrex);
    let identifiers =[];
    let numbers =[];

    arr.map( e=>{
        if(identifiersReg.test(e)){
            identifiers.push(e);
        }else if(numReg.test(e)){
            numbers.push(e);
        }
    })
    console.log("Identifiers are:");
    console.log(identifiers);
    console.log("Numbers are:");
    console.log(numbers);
    console.log("Operators are:");
    console.log(str.match(signrex));
    console.log("Special Charecters are:");
    identifiers.map( el=>{
        if(special.test(el)){
            console.log(el);
        }
    })

    //console.log(find_duplicate_in_array(identifiers));
}

function find_duplicate_in_array(array){
    const count = {}
    const result = []
    
    array.forEach(item => {
        if (count[item]) {
           count[item] +=1
           return
        }
        count[item] = 1
    })
    
    for (let prop in count){
        if (count[prop] >=2){
            result.push(prop)
        }
    }
    
    console.log(count)
    console.log(result);
    return result;
    
    }
let input = readline();
getidentyifier(input);