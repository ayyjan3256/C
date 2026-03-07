#include <stdio.h>
void itob(int n, char s[], int base);
int main(){
    char sui[100];
    int m=2;
    int s=42;
    itob(s,sui,m);
    printf("%s",sui);
    return 0;
}
void itob(int n,char s[],int base){
    int i,digit,rem;
    i=0;
    digit=n;
    do{
        rem=digit%base;
        digit=digit/base;
        if (rem >= 10)
            s[i++] = rem - 10 + 'A';
        else
            s[i++] = rem + '0';
    }
    while (digit!=0);
    s[i]='\0';
    reverse(s);
}

void reverse(char s[])
   {
       int c, i, j;
       for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
           c = s[i];
           s[i] = s[j];
           s[j] = c;
       }
   }
