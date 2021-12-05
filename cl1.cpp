#include<iostream>
using namespace std;
main()
{   string str ;
    cin>>str;
    int length = str.length();
    if(str.substr(0, 2)=="//"){
        cout << "It is a comment";
    }
    else if(str.substr((length-2), 2)=="*/" && str.substr(0, 2)=="/*"){
        cout << "It is a comment";
    }
    else{
        cout << "User didn't write any comment";
    }

	return 0;
}
