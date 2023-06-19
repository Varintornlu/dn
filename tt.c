#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n==2){
        printf("prime number");
        return 0;
    }
    if(n%2==0 ||n<=1 ){
         printf("not a prime number");
        return 0;
    }
    for(int i=3;i*i<n;i+=2){
        if(n%i==0){
            printf("not a prime number");
            return 0;
        }
    }
    printf("prime number");
    }