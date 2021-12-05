//"restrult = a+b-c*100000000"



function getIdentifier(str){
    let identifier =[];
    let operator = [];
    let number = [];
    let ident = "", num = "";

    for( let i = 0; i < str.length; i++){
        if((str[i] >= 'a' && str[i] <= 'z')||(str[i] >= 'A' && str[i] <= 'Z')){
            ident+=str[i];
            if(!(str[i+1] >= 'a' && str[i+1] <= 'z')||(str[i+1] >= 'A' && str[i+1] <= 'Z')){
                identifier.push(ident);
                ident= "";
            }
        }
        else if(str[i] == '=' || str[i] == '+'||str[i] == '-' || str[i] == '*'|| str[i] == '/'){
            operator.push(str[i]);
        }
        else if(str[i] >= '0' && str[i] <= '9'){
            num+=str[i];
            if(!(str[i+1] >= '0' && str[i+1] <= '9')){
                number.push(num);
                num = "";
            }
        }
            
    }
    console.log(operator, number, identifier);
    console.log("Identifiers are: ");
    identifier.map(e=>{
        console.log(e);
    })

}

getIdentifier("restrult = a+b-c*100000000");