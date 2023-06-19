#include<stdio.h>
    int main(){
        int i=5 ;
        int mark[12] ={1,2,3,4,5,6,7,8,9,10,11,12};
        for (int x =0 ; x<12;x++){
        
        printf("%d * %d =%d\n",i,mark[x],mark[x]*i);
            }
    return 0;
    }