#include <stdio.h>
#define MAX 100
int get_line(char line[],int limit);
void copy(char from[],char to[]);
int main(){
	int max,length;
	char line[MAX];
	char longest[MAX];
	max=0;
	while((length=get_line(line,MAX))>max){
		max=length;
		copy(line,longest);
		}
	printf("\nLongest line:%s\n",longest);
	printf("Size: %d",max)
	return 0;
	}
int get_line(char line[],int limit){
	int i,c;
	i=0;
	while((c=getchar())!=EOF&&c!='\n'){
		if (i<limit-1){
			line[i]=c;
			}
		i++;
	}
    if (c=='\n'){
		line[i]=c;
		i++;
		}
	line[i]='\0';
	return i;
}
void copy(char from[],char to[]){
	int i=0;
	while(from[i]!='\0'){
		to[i]=from[i];
        i++;
		}
		to[i] = '\0';
	}
