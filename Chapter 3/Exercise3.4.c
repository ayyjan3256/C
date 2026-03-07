#include <stdio.h>
#include <limits.h>
int main(){
    char array[100];
    int num=0;
    itoa(num,array);
    printf("%s",array);
    return 0;
}

void itoa(int n, char s[])
   {
       int i, sign;
       if ((sign = n) > 0)  /* record sign */
           n = -n;          /* make n negative */
       i = 0;
       do {      /* generate digits in reverse order */
           s[i++] = -(n % 10) + '0';  /* make positive get next digit */
       } while ((n /= 10)< 0);           /* delete it */
       if (sign < 0)
           s[i++] = '-';
       s[i] = '\0';
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
