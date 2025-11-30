#include <stdio.h>
#define TABSIZE 8
int main(){
	int c,column,spaces;
	spaces=column=0;
	while((c=getchar())!=EOF){
		if (c==' '){
            spaces++;
			column++;
            if ((column + spaces) % TABSIZE == 0) {
				putchar('\t');
				spaces = 0;  
				column += TABSIZE - (column % TABSIZE);
                }
            }
        else{
            while (spaces > 0) {
                putchar(' ');
                spaces--;
                }
            putchar(c);
            if(c=='\n'){
            column=0;
                }
            else{
            column++;
                }
            }
    }
    return 0;
}
