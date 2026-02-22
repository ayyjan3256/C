#include <stdio.h>
int setbits(unsigned x,int p,int n,unsigned y);
int main(){
    printf("%d",setbits(58,4,3,39));
    return 0;
}
int setbits(unsigned x,int p,int n,unsigned y){
    int z=~(~0<<n);
    y=y&z;
    y=y<<(p+1-n);
    z=z<<(p+1-n);
    x=x&z;
    return x|y;
}
