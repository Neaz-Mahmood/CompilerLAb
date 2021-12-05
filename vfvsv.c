#include<stdio.h>
int main(){
    int speed =60;
    double hour, distance;
    printf("Plear type the hour:\n");
    scanf("%lf", &hour);

    distance = speed*hour;

    printf("The car has travelled %0.2lf miles.\n", distance);

    return 0;
}
