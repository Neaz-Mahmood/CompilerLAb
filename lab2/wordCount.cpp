#include <iostream>
#include <string>
using namespace std;

// Driver code
int main()
{
    string sentence;
    int i, count=1;
    cout << "Type the sentence: ";
    cin >> sentence;

    for(i=0; i<sentence.size();i++){
        if(sentence[i]==' '){
            count++;
        }
    }
    cout<<count;

    return 0;
}
