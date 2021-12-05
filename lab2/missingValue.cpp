#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> getUserInput(){
    int n, i, in;
    vector<int>myVec;
    cout<< "Enter size of the array : ";
    cin>>n;
    cout<< "Enter elements in array : ";
    for(i=0; i<n; i++)
    {
    cin>>in;
     myVec.push_back(in);
    }
    return myVec;
}

int main(){
    int i, j;
    vector<int>vec;
    vector<int>missingValue;
    vec= getUserInput();
    for(i=0, j=vec.at(0); i<vec.size(); i++,j++){
        if(vec.at(i)!=j){
            missingValue.push_back(j);
            j= vec.at(i);
        }
    }

    cout<<"The missing values are: ";
    for (auto i = missingValue.begin(); i != missingValue.end(); ++i){
        cout << *i << " ";
    }
    return 0;
}

