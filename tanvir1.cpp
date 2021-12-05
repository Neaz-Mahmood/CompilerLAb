#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int arr[100], n, i, j;
    cout<< "Enter size of the array : ";
    cin>>n;
    cout<< "Enter elements in array : ";
    for(i=0; i<n; i++)
    {
    cin>> arr[i];//1 2 3 1 2
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j]){

                cout<< "Repeated value in array are : "<<arr[i];

                }



            }



    }
    getch();
}
