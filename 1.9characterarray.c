/*EXERCISE 1.16
#include <stdio.h>
#define MAXLINE 1000
int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int main(){
	int length;
 	int max;
 	char line[MAXLINE];
	char longest[MAXLINE];
 	max = 0;

	while ((length=get_line(line,MAXLINE))>0){
		if (length>max){
			max=length;
			copy(longest,line);
		}
	}
	if (max>0){
		printf("Longest Line: %s\n",longest);
		printf("Length of the longest line: %d",max);
	}
	return 0;
}

int get_line(char lines[], int maxline){
        int i,c,j;
	j=0;
        for (i=0;i<maxline-1&&(c=getchar())!=EOF&&c!='\n';++i){
                if (j<maxline-1){
			lines[j++]=c;
        	}
	}
        if (c=='\n'){
                if (j<maxline-1){
                	lines[j++]='\n';
        	}
        	++i;
	}
        lines[j]='\0';
        return i;
}

void copy(char to[], char from[]){
        int i=0;
        while((to[i]=from[i])!='\0'){
                ++i;
        }
}*/
/*EXERCISE 1.18
#include <stdio.h>
#define MAXLINE 1000
int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int main(){
        int length;
        char line[MAXLINE];
        char longest[MAXLINE];
        int max;
        max=0;
        while ((length=get_line(line,MAXLINE))>0){
               trail_remover(line);
                printf("%s",line);
	}
        return 0;
}

int get_line(char lines[], int maxline){
        int i,c,j;
        j=0;
        for (i=0;i<maxline-1&&(c=getchar())!=EOF&&c!='\n';++i){
                if (j<maxline-1){
                        lines[j++]=c;
                }
        }
        if (c=='\n'){
                if (j<maxline-1){
                        lines[j++]='\n';
                }
                ++i;
        }
        lines[j]='\0';
        return i;
}

void copy(char to[], char from[]){
        int i=0;
        while((to[i]=from[i])!='\0'){
                ++i;
        }
}
void trail_remover(char s[]){
    int i;
    for (i=0;s[i]!='\0';++i)
        ;
    --i;
    while (i>=0&&(s[i]==' '||s[i]=='\t')){
        --i;
    }
    if (i>0){
        s[++i]='\n';
        s[++i]='\0';
    }
    else{
        s[0]='\0';
    }
}
*/
/*EXERCISE 1.19
#include <stdio.h>
#define MAXLINE 1000
int get_line(char array[],int maxline);
void reverse(char array[]);
main(){
	int l;
	char array[MAXLINE];
	if ((l=get_line(array,MAXLINE))>0){
		reverse(array);
	}
	printf("%s",array);
}
int get_line(char array[],int maxline){
	int i,c;
	for(i=0;i<maxline-1&&(c=getchar())!=EOF&&c!='\n';++i){
		array[i]=c;
	}
	if(c=='\n'){
                array[i]=c;
                ++i;
	}
	array[i]='\0';
	return i;
}
void reverse(char array[]){
	int i,k;
	for (i=0;array[i]!='\0';++i){
        ;
	}
	if(i>0&&array[i]=='\n'){
        i--;
    }
    for (k=0,i--;k<i;k++,i--){
        char temp=array[i];
        array[i]=array[k];
        array[k]=temp;
    }
}
*/
