#include <stdio.h>
#define TABSIZE 8
int main(){
 int c,column,spaces;
 spaces=column=0;
 while((c=getchar())!=EOF){
      if (c==' '){
           spaces++;
           column++;
           if((column%TABSIZE)==0){
               putchar('\t');
               putchar('t');
               spaces=0;
           }
      }
     else{
        while(spaces>0){
               putchar(' ');
               spaces--;
               putchar('s');
             }
         if(c=='\n'){
             column=0;
         }
         else{
             putchar(c);
             column++;
       }
    }
  }  
return 0;
}
