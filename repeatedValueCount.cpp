#include<iostream.h>
#include<conio.h>

 void main()
 {
  int i,arr[20],j,no;
  clrscr();
  cout<<"Enter Size of array: ";
  cin>>no;
  int arr[no], countArr[no];
  cout<<"Enter any "<<no<<" num in array: ";
  for(i=0;i<no;i++)
  {
   cin>>arr[i];

  }
  cout<<"Dublicate Values are: ";
  for(i=0; i<no; i++)
   {
    for(j=i+1;j<no;j++)
    {
    if(arr[i]==arr[j])
    {
    cout<<"\n"<<arr[i];
    }
   }
   }
  getch();
 }
