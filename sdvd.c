#include<stdio.h>
#include <math.h>
double root4(int num){
    double number, fourthRoot;
    number = sqrt(num);
    fourthRoot = sqrt(number);
    return fourthRoot;
}
int main(){
    int n;
    double res;
    printf("Please enter a number:\n");
    scanf("%d", &n);
    res = root4(n);
    printf("The 4th root of a number is %0.2lf", res);

    return 0;
}
