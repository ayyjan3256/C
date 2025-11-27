
#include <stdio.h>
#define TABSIZE 8
void detab(char character);
int main(){
	int c;
	char column;
	while((c=getchar())!=EOF){
			if (c=='\t'){
			int spaces=TABSIZE-(column%TABSIZE);
				for (int j=0;j<spaces;++j){
					putchar(' ');
					}
				column+=spaces;
				}
			else{
				putchar(c);
				column++;
				if(c=='\n'){
					column=0;
					}
				}
		}
	}
