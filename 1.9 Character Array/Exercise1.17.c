#include <stdio.h>
#define MAX 100
int get_line(char line[],int limit);
int main(){
	int max,length;
	char line[MAX];
	while((length=get_line(line,MAX))>0){
		if (length>80){
    printf("%s\n",line);
      }
		}
	return 0;
	}
int get_line(char line[],int limit){
	int i,c;
	i=0;
	while((c=getchar())!=EOF&&c!='\n'&&i<limit-1){
	  line[i]=c;
		i++;
	}
    if (c=='\n'){
		line[i]=c;
		i++;
		}
	line[i]='\0';
	return i;
}
