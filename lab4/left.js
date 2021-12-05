function leftRecursion(expression , obj){
    let grammar = expression.trim();

    let nonTerminal = grammar[0];
    let production = grammar.slice(grammar.indexOf('>')+1);

    let arr = production.split("|");
    let recursive = [];
    let nonRecursive = [];
    //this part of the code looks risky
    
    let productionArr = checkTerminal(arr, obj);

    productionArr.forEach(p => {
        if(p[0]==nonTerminal){
            let s = p.slice(1);
            s+=nonTerminal+"'"
            recursive.push(s);
        }else{
            nonRecursive.push(p+nonTerminal+"'");
        }
    });
    if(recursive.length){
        let newGrammar = nonTerminal+" ->"+nonRecursive.join("|");

        let factoredGrammar = nonTerminal+"' ->"+recursive.join("|")+"| ε";

        return [nonTerminal, newGrammar, nonRecursive, factoredGrammar];
    }else{
        let newGrammar = nonTerminal+" ->"+productionArr.join("|");

        let factoredGrammar = "";

        return [nonTerminal, newGrammar, productionArr, factoredGrammar];
    }
    
}
function checkTerminal(product, obj){
    let newArr =[];
    product.forEach(e=>{
        e = e.trim();
        if(e[0] in obj){
            let grammarArr = obj[e[0]].map(str =>{
                return str+e.slice(1);
            });
            newArr.push(...grammarArr);
        }else{
            newArr.push(e)
        }
    });
    return newArr;
       
}

function print(obj){
    for(let keys in obj){
        console.log(obj[keys][0]+"\n"+obj[keys][1]+"\n");
    }
}

function main(arr){
    const grammarObj = {};
    const removalObj ={};
    arr.forEach(exp=>{
        const [nonTerminal, newGrammar, nonRecursive, factoredGrammar] = leftRecursion(exp, grammarObj);
        grammarObj[nonTerminal]= nonRecursive;
        removalObj[nonTerminal] = [newGrammar, factoredGrammar];
    })
    //console.log(removalObj);
    print(removalObj);
}

// function getInput(){
//     let inputArr = [];
//     console.log("how many expression in the grammar?");
//     let n = parseInt(readline());
//     for(let i = 0;i<n;i++){
//         let str = readline();
//         inputArr.push(str);
//     }
//     main(inputArr);
// }
//getInput();

//let input = readline();
//leftRecursion("A -> ABd | Aa | a");
let a = "Y -> YaY | ZY |b";
let b = "C -> dfc| ed| f";
let c = "Z -> Ca| ZZY| deC";
let array = [a, b, c];
main(array);