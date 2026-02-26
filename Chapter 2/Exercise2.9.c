#include <stdio.h>
int bitcount(unsigned x);//Counts how many 1's are in the number(Binary form) 
int main(){
    unsigned x =0x00000029;
    printf("%d",bitcount(x));
    return 0;
}
int bitcount(unsigned x){
    int i;
    for(i=0;x!=0;i++){//Increment for every right most number 'one' erased
        x&=(x-1);//Erase the right most 'one'
    }
    return i;
}
