#include <stdio.h>
#define MAXSIZE 1000
int main(){
    int c,i;
    char characters[MAXSIZE]={0};
    char ordered[200]={0};
    int frequency_dist[200]={0};
    i=0;

    while ((c=getchar())!=EOF){
        characters[i++]=c;
    }
    characters[i]='\0';

    int k=0;
    for (int l=0;l<i;++l){
    int found=0;
    char current_char=characters[l];
        for (int j=0;j<k;++j){
            if (ordered[j]==current_char){
                frequency_dist[j]++;
                found=1;
                break;
            }
        }
        if (found==0){
            ordered[k]= current_char;
            frequency_dist[k]=1;
            k++;
        }
    }
    ordered[k]='\0';
    printf(" ");
    for (int i=0;i<k;++i){
		printf("%c:",ordered[i]);
		printf("%d\n",frequency_dist[i]);
    }
}
