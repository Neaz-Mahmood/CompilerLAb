#include<stdio.h>
int checkNiven(int num){
    int number,sum=0;
    int digit;
    number=num;
 while(number!=0)
    {
        digit=number%10;
        sum+=digit;
        number=number/10;
    }
    if(num%sum==0)
       return 1;
    else
       return 0;
}
int main(){
    int start, end, i, res;
    printf("Please enter the starting and ending point of the loop:\n");
    scanf("%d %d", &start, &end);
    for(i=start;i<=end;i++){
        res= checkNiven(i);
        if(res==1){
            printf("%d, \n", i);
        }
    }
    return 0;
}
