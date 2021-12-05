//arr=[10,20,30];
//sobcheye boro value r 2nd biggest value
function findBiggest(arr){
    let biggest= arr[0];
    let secondBiggest= 0;
    for(let i=0, j=arr[0]; i<arr.length; i++,j++){
        if(arr[i]!=j){
            missingValue=j;
            break;
        }
    }
    console.log("Biggest value is :"+ biggest+ " & \n 2nd Biggest value is :"+ secondBiggest);
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
getInput();
//["10 20 30", "5", "5"]
//arr=[3,4,6,7,8]
//load("codes/findBiggest.js")