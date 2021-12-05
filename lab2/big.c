#include <stdio.h>
int main()
{
    int arr[10],n;
    int larg1,larg2,i;
    printf("enter the num of elements in arrey= ");
    scanf("%d",&n);
    printf("enter the elements= ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    larg1=arr[0];
    for(i=0;i<n;i++)
    {
      if(arr[i]>larg1)
      {
          larg1=arr[i];
      }
    }
    larg2=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>larg2 && arr[i]<larg1)
        {
            larg2=arr[i];
        }
    }
    printf("1st & 2nd largest num is %d & %d",larg1,larg2);
    return 0;
}
