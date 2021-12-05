#include<stdio.h>
int main(){
    int amount;
    printf("please enter the amount:\n");
    scanf("%d" ,&amount);

    switch(amount>=500?1:0){
        case 0:
            printf("INVALID AMOUNT\n");
            break;
        case 1:
            switch(amount%500){
                case 0:
                    switch(amount<=20000?1:0){
                        case 0:
                            printf("EXCEEDED AMOUNT\n");
                            break;
                        case 1:
                            printf("TRANSACTION SUCCESSFUL\n");
                            break;
                    }
                    break;
                default:printf("INVALID VALUE\n");
            }
            break;
        default: printf("Error Occurred\n");
    }

    return 0;
}
