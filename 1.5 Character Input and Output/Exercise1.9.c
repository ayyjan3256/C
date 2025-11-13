#include <stdio.h>
int main(){
	int c,previous;
	previous='\0';
	while((c=getchar())!=EOF){
		if (!(previous==' '&&c==' ')){
            putchar(c);
        }
		previous=c;
    }
    return 0;
}
