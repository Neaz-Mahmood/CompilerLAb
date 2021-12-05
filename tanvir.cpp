#include<bits/stdc++.h>
#include<conio.h>
#include<vector>
using namespace std;
int main()
{
    int arr[100], n, i, j, count=0;
    cout<< "Enter size of the array : ";
    cin>>n;
    std::vector< int > repeatedArr;
    cout<< "Enter elements in array : ";
    for(i=0; i<n; i++)
    {
    cin>> arr[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                auto rslt = find(repeatedArr.begin(), repeatedArr.end(), arr[i]);
                if (rslt == end(repeatedArr)){
                    repeatedArr.push_back(arr[i]);
                    count++;
                }

                break;
            }
        }
    }

    cout<< "Repeated value count in array are : "<< count<<endl;
    cout<< "Repeated values are : ";
    for (auto i = repeatedArr.begin(); i != repeatedArr.end(); ++i)
        cout << *i << " ";
    getch();
    //return 0;
}
