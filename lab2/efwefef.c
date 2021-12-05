#include<stdio.h>
int main(){

    int height, width;
    double result,pi= 3.1416;

    printf("Please type the height:\n");
    scanf("%d", &height);
    printf("Please type the width:\n");
    scanf("%d", &width);

    result = (3*pi)+(height*width)+(height*height)/((2*pi)*(width*width));

    printf("Result is %0.2lf", result);


    return 0;

}
