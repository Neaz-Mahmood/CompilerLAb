#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[100], n, i, j;
    cout<< "Enter size of the array : ";
    cin>>n;
    //std::vector< int > repeatedArr;
    cout<< "Enter elements in array : ";
    for(i=0; i<n; i++)
    {
    cin>> arr[i];
    }
    int maxCount= arr[0], minCount= arr[0];

    for(i=0; i<n; i++)
    {
        if(arr[i]>maxCount){
            maxCount = arr[i];
        }
        if(arr[i]<minCount){
            minCount = arr[i];
        }
    }

    cout<< "Maximum value in the arrey is: "<<maxCount<< endl;
    cout<< "Miniimum value in the arrey is: "<<minCount<< endl;
    cout<< "The arrrey without the maximaum & minimum value: ";
    for(i=0; i<n; i++)
    {
        if(arr[i]==maxCount){
            continue;
        }
        if(arr[i]==minCount){
            continue;
        }
        cout<<arr[i]<<" ";
    }

    return 0;





}
