function palindrome(str) {
    let exp = /[a-z0-9]/ig;
    let lowerStr = str.toLowerCase();
    let arr = lowerStr.match(exp);
    //let orizinalStr = arr.join("");
    //let reversedStr = arr.reverse().join("");
    console.log(arr, arr.reverse());
    if(arr==arr.reverse()) {
      return true;
    }
  
    return false;
  }
  
  
  
  console.log(palindrome("not a palindrome"));