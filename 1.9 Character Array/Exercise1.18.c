#include <stdio.h>
#define MAX 100
int get_line(char line[],int limit);
void trail_remover(char line[]);
int main(){
	int length;
	char line[MAX];
	while((length=get_line(line,MAX))>0){
	trail_remover(line);
	printf("\nLongest line:%s\n",line);
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
void trail_remover(char line[]){
  int i;
  for(i=0;line[i]!='\0';++i){
    ;
  }
  i--;
  while(i>=0&&(line[i]=='\t'||line[i]=='\n'||line[i]==' ')){
    --i;
  }
  if(i>=0){
    line[++i]='\n';
    line[++i]='\0';
  }
  else{
    line[0]='\0';
  }
}
