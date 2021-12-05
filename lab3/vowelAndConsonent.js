const readline = require('readline');
function checkVowel(word) {
    let wordArr = word.split(' ');
    let vowelRegex = /[aeiou]/ig;
    let vowelCount = 0;
    wordArr.map(letter => {
        if(vowelRegex.test(letter)){
            vowelCount++;
        }
    });
    console.log(`Number of vowel is: ${vowelCount}`);
    console.log(`Number of Consonant is: ${word.length -vowelCount}`);

}
function replaceVowel(str){
    let vowelRegex = /[aeiou]/ig;
    let stringWithVowel = str.replace(vowelRegex, '')
    console.log(stringWithVowel);

}

function getInput(){
    let userInput = [];
    console.log("Please enter the length of the array : ");
    let length = readline();
    for(let i=0; i<length;i++){
        userInput.push(parseInt(readline(), 10));
    }
    findBiggest(userInput);
}

//checkVowel("well");
let str = readline();
replaceVowel(str);