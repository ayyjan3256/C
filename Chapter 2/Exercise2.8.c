#include <stdio.h>
int rightrot(unsigned x,int n);
int main(){
unsigned x=41;
int b=rightrot(x,2);
printf("%d",b);
return 0;
}
int rightrot(unsigned x, int n){
    int z=~(~0<<n);
    int y=x&z;
    x=x>>n;
    int w=sizeof(x)*8;
    y=y<<(w-n);
    return x|y;
}
