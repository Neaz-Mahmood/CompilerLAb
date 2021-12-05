#include<iostream>
#include<vector>
#include <string>
#include <regex>
using namespace std;
main()
{   string str ;
    std::vector< int > arr;
    cin>>str;
    int length = str.length();
    char op [length];
    for(int i=0; i<length;i++){
regex regexp("[a-z/A-z]+");
    if(str[i]==regexp){

    arr.push_back(str[i]);
    }

    }
    cout<<arr;
	return 0;
}

