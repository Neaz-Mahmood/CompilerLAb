//   A -> ABd | Aa | a    
//A -> aA'
//A' - BdA'| aA' | #
//[" ABd "," Aa "," a"]
//" ABd "-> "ABd"-> "BdA'"

function leftRecursion(expression){
    let grammar = expression.trim();

let nonTerminal = grammar[0];
let production = grammar.slice(grammar.indexOf('>')+1);

let productionArr = production.split("|");
let recursive = [];
let nonRecursive = [];

productionArr.forEach(p => {
    p= p.trim();
    if(p[0]==nonTerminal){
        let s = p.slice(1);
        s+=nonTerminal+"'"
        recursive.push(s);
    }else{
        nonRecursive.push(p+nonTerminal+"'");
    }
});
let newGrammar = nonTerminal+" ->"+nonRecursive.join("|");

let factoredGrammar = nonTerminal+"' ->"+recursive.join("|")+"| e";
console.log(newGrammar)
console.log(factoredGrammar);
}

//let input = readline();
leftRecursion("A -> ABd | Aa | a");