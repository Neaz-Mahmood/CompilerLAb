#include<iostream>
using namespace std;
main()
{   string str = '';
    cin>>str;
    if(str.substr(0, 2)=="//"){
        cout << "It is a comment";
    }

	return 0;
}
