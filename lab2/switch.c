#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    switch(n){
        case 1:
            printf("I");
            break;
        case 2:
            printf("II");
            break;
        case 3:
            printf("III");
            break;
        case 4:
            printf("IV");
            break;
        case 5:
            printf("V");
            break;
        default:
            printf("Out of Range.");
    }
    return 0;
}
