#include<bits/stdc++.h>
using namespace std;

int vowelCounter(string s){
    int number_of_vowels = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            number_of_vowels++;
    }
    return number_of_vowels;
}


int consonantCounter(string s){
    int number_of_consonant = 0;

    for(int i = 0; i < s.size(); i++){
        if(!(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
        s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
         s[i] == ' ') && (s[i] >= 'a' && s[i] < 'z') || (s[i] >= 'A' && s[i] < 'Z'))
            number_of_consonant++;
    }
    return number_of_consonant;
}

string removeVowel(string s){
    string noVowel = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
        s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            continue;
        }
        noVowel += s[i];
    }
    return noVowel;
}

string removeSpecialCharecter(string s){
    string noSpecialCharacter = "";
    for(int i = 0; i < s.size(); i++){
        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9') || s[i] == ' ')
        noSpecialCharacter += s[i];
    }
    return noSpecialCharacter;
}


int main(){
    string line;
    int vowel, consonant;
    getline(cin, line);
    vowel = vowelCounter(line);
    cout<<"Number of vowel in line is "<<vowel<<endl;
    consonant = consonantCounter(line);
    cout<<"Number of consonant in line is "<<consonant<<endl;
    cout<<"Without Vowel: "<<removeVowel(line)<<endl;
    cout<<"Without Special Character: "<<removeSpecialCharecter(line)<<endl;
