#include <stdio.h>
int httoi(char numbers[]);
int main(){
	char string0[]={"0x1f"};
	printf("%d",httoi(string0));
	return 0;
	}
int httoi(char numbers[]){
	int n=0;
	int i,j,k;
    for(i=0;numbers[i]!='\0';i++){
        ;
    }
	if (numbers[0]=='0'&&(numbers[1]=='x'||numbers[1]=='X')){
        j=2;
    }
    else{
        j=0;
    }
	for(;j<i;j++){
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
