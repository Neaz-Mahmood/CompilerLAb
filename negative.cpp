#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[100], n, i, j, count =0;
    cout<< "Enter size of the array : ";
    cin>>n;
    //std::vector< int > repeatedArr;
    cout<< "Enter elements in array : ";
    for(i=0; i<n; i++)
    {
    cin>> arr[i];
    }
    //cout<<"Negative values are: ";
    for(i=0; i<n; i++)
    {
        if(arr[i]<0){
            //cout<<arr[i]<<" ";
            count++;
        }

    }
    cout<<"Negative values count is: "<<count<<endl;



    return 0;





}
