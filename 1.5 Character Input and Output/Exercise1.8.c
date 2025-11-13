#include <stdio.h>
int main(){
	int c,b,t,nl;
	b=t=nl=0;
	while ((c=getchar())!=EOF){
		if(c=='\t'){
			t+=1;
		}
		if(c==' '){
            b+=1;
                }
		if(c=='\n'){
            nl+=1;
                }
	}
	printf("tabs:%d\nempty spaces:%d\nnewlines:%d",t,b,nl);
	return 0;
}
