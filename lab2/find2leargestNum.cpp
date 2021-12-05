#include<bits/stdc++.h>
#include<vector>
using namespace std;
//It takes input from user and returns as a vector
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
    vec= getUserInput();
    int largest = vec.at(0), secLargest =vec.at(1);

    for(i=0;i<vec.size();i++){
        if(vec.at(i)>largest){
            secLargest = largest;
            largest = vec.at(i);
        }else if(vec.at(i)>secLargest&& vec.at(i)!=largest){
            secLargest = vec.at(i);
        }
    }

    cout<<"The largest number in the array is: "<<largest<<endl;
    cout<<"The second largest number in the array is: "<<secLargest<<endl;

    return 0;

}

