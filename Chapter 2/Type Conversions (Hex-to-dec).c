#include <stdio.h>
int httoi(char numbers[]);
int main(){
	char string0[]={"0xfff"};
	printf("%d",httoi(string0));
	return 0;
	}
int httoi(char numbers[]){
	int n=0;
	int i,k;
	for (i=0;numbers[i]!='\0';i++){
		;
		}
	
	for(int j=2;j<i;j++){
		if (numbers[j]>='0' && numbers[j]<='9'){
			k=numbers[j]-'0';
			}
		if (numbers[j]>='a'&& numbers[j]<='f'){
			k=numbers[j]-'a'+10;
			}
		if (numbers[j]>='A'&& numbers[j]<='F'){
			k=numbers[j]-'A'+10;
			}
		n=16*n+k;
		}
	return n;
	}
