#include <stdio.h>
int main(void){

    int n;
    printf("enter the number");
    scanf("%d", &n);

    int round = 0;
    while(round < n){
        printf("*");
        round++;
    }
    return 0;
}