#include <stdio.h>
void expand(char s1[],char s2[]);
int main(){
    char s1[]="0-4-8";
    char s2[100];
    expand(s1,s2);
    printf("%s",s2);
    return 0;
}
void expand(char s1[],char s2[]){
    int i,l,j;
    j=l=0;
    for(i=0;s1[i]!='\0';i++){
        ;
    }
    i--;
    if (s1[0]=='-'){
            s2[l++]='-';
            j=1;
        }
    for(;s1[j]!='\0';j++){

        if (s1[j] >= '0' && s1[j] <= '9' &&s1[j+1] == '-' &&s1[j+2] >= '0' && s1[j+2] <= '9'){
            int difference=s1[j+2]-s1[j];
            for (int m=0;m<=difference;m++){
                char c= s1[j]+m;
                s2[l++]=c;
            }
            j+=2;
        }
        else if(s1[j]>='A' && s1[j] <= 'Z' &&s1[j+1] == '-' &&s1[j+2] >= 'A' && s1[j+2] <= 'Z'){
                int difference=s1[j+2]-s1[j];
                for (int m=0;m<=difference;m++){
                        char c=s1[j]+m;
                        s2[l++]=c;
                }
                j+=2;
        }
        else if(s1[j]>='a' && s1[j] <= 'z' &&s1[j+1] == '-' &&s1[j+2] >= 'a' && s1[j+2] <= 'z'){
                int difference=s1[j+2]-s1[j];
                for (int m=0;m<=difference;m++){
                        char c=s1[j]+m;
                        s2[l++]=c;
                }
                j+=2;
        }
        else{
            s2[l++]=s1[j];
        }
    }
    s2[l] = '\0';
}
