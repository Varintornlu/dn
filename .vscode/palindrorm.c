#include <stdio.h>
#include <string.h>

int palin (char a[], int b){
    int x=0;
    int y=b-1;
    while (x<y){
        if (a[x++]!=a[y--])
        return 1;
    }

}
int main(){
    char c[20];
    printf("enter input");
    scanf("%s",&c);
    if (palin(c,strlen(c))){
       printf("is not a palindrome");
    }
    else printf("is a palindrome");

}