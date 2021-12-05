#include<bits/stdc++.h>
#include<vector>
#include <sstream>
using namespace std;
vector<string>getIdentifiers(string s){
    int i;
    vector<string> identifires;
    string str ="";
    for(i=0;i<s.size();i++){
        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z')){
            str+=s[i];
            if(!(s[i+1] >= 'a' && s[i+1] <= 'z')||(s[i+1] >= 'A' && s[i+1] <= 'Z')){
                identifires.push_back(str);
                str="";
            }
        }
    }
    return identifires;
}
vector<char>getOperators(string s){
    int i;
    vector<char> operators;
    for(i=0;i<s.size();i++){
        if(s[i] == '=' || s[i] == '+'||s[i] == '-' || s[i] == '*'|| s[i] == '/'){
            operators.push_back(s[i]);
        }
    }
    return operators;
}

vector<int>getNumbers(string s){
    int i;
    string num ="";
    vector<int> numbers;
    for(i=0;i<s.size();i++){
        if(s[i] >= '0' && s[i] <= '9'){
           num+=s[i];
           if(!(s[i+1] >= '0' && s[i+1] <= '9')){
                stringstream geek(num);
                int x = 0;
                geek >> x;
                numbers.push_back(x);
                num = "";
           }
        }
    }
    return numbers;
}
void printStrings(vector<string> exp ){
    for (auto i = 0; i <exp.size(); ++i){
        cout << exp.at(i) << " ";
    }
    cout<<endl;
}

void printChars(vector<char> exp ){
    for (auto i = 0; i <exp.size(); ++i){
        cout << exp.at(i) << " ";
    }
    cout<<endl;
}

void printNumbers(vector<int> exp ){
    for (auto i = 0; i <exp.size(); ++i){
        cout << exp.at(i) << " ";
    }
    cout<<endl;
}


int main(){
    string expression;
    cout<<"Please enter the expression:"<<endl;
    getline(cin, expression);
    cout<<expression<<endl;
    vector<string>identifiers;
    vector<char>operators;
    vector<int>numbers;

    identifiers = getIdentifiers(expression);
    operators = getOperators(expression);
    numbers = getNumbers(expression);

    cout<<"Identifiers are : ";
    printStrings(identifiers);

    cout<<"Numbers are : ";
    printNumbers(numbers);

    cout<<"Operators are : ";
    printChars(operators);

    return 0;

}
