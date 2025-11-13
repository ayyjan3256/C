#include <stdio.h>
#define  IN 1
#define  OUT 0
main(){
  int i,c,state;
  state=OUT;
  while((c=getchar())!=EOF){
    if (c=='\t'||c=='\n'||c==' '){
      if(state==IN){
        state=OUT;
        printf("\n");
      }
    }
    else if (state==OUT){
      state=IN;
      putchar(c);
    }
  }
}
