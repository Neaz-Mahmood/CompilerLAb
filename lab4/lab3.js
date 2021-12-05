function getidentyifier(str){
    let signrex = /\W/g;
    let identifiersReg =/\D/ig;
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


    console.log(find_duplicate_in_array(identifiers));
}

const items2 = ['pencil', 'book','pencil']

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

find_duplicate_in_array(items2)