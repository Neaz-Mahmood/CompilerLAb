#include<stdio.h>
int main(){
    int n, i, j , cube;
    float res;
    printf("Please enter the nth value:\n");
    scanf("%d", &n);
    for(i=1, j=2;i<=n;i++, j+=2){
        cube = i*i*i;
        res = (cube/j)*cube;
    }

    printf("%dth number is %0.2f", n, res);

    return 0;
}
