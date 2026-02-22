#include <stdio.h>
int invert(unsigned x, int p, int n);
int main(){
    int a=invert(53,3,3);
    printf("%d",a);
return 0;
}
int invert(unsigned x, int p, int n){
    int z=~(~0<<n);
    int y=~x>>(p+1-n);
    y=y&z;
    y=y<<(p+1-n);
    z=z<<(p+1-n);
    x=x&(~z);
    return x|y;
}
