#include<stdio.h>
int main(){

    int ab, bc, ca;
    printf("Please enter 3 number:\n");
    scanf("%d %d %d", &ab, &bc, &ca);

    if(ab+bc>ca&&ab+ca>bc&&bc+ca>ab){
        if(ab==bc&&ca==ab&&bc==ca){
            printf("Triangle is Equilateral\n");
        }
        else if(ab==bc||ab==ca||bc==ca){
            printf("Triangle is isosceles\n");
        }
        else{
            printf("Triangle is scalene\n");
        }
    }else{
        printf("triangle cannot be formed");
    }

    return 0;
}
