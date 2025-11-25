#include <stdio.h>
#define MAX 1000
void reverse(char line[]);
int get_line(char line[],int limit);
int main(){
	int length;
	char line[MAX];
	while((length=get_line(line,MAX))>0){
	reverse(line);
	printf("\nReversed Line:%s\n",line);
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
void reverse(char line[]){
  int i,j;
  char temp;
  for(i=0;line[i]!='\0';++i){
      ;
  }
  --i;
  
  for(j=0;j<i;++j){
    temp=line[j];
    line[j]=line[i];
    line[i]=temp;
    --i;
  }
}
