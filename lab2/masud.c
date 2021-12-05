#include<stdio.h>
void main (){
    int num1,num2,num3, num4;
     printf("Enter the 1st number :");
     scanf("%d", &num1);
     printf("Enter the 2nd number :");
     scanf("%d", &num2);
     printf("Enter the 3rd number :");
     scanf("%d", &num3);
     printf("Enter the 4th number :");
     scanf("%d", &num4);
    if (num1>num2&&num1>num3&&num1>num4){
        printf("num1 is large");
    }
    else if(num2>num3&&num2>num4){
        printf("num2 is large");
    }
    else if(num3>num4){
        printf("num3 is large");
    }
    else{
        printf("num4 is large");
    }

}
