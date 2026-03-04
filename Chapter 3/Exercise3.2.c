#include <stdio.h>
void escape(char s[],char t[]);
void unescape(char s[], char t[]);
int main(){
    char s1[] = "Start\tColumn1\tColumn2\nNext Line with a backslash:\\";
    char s2[] = "Start\\tColumn1\\tColumn2\\nNext Line with a backslash:\\\\";
    char t[1000];
    escape(s1,t);
    printf("Original:%s\n",s1);
    printf("Escaped:%s\n",t);
    unescape(s2,t);
     printf("Original:%s\n",s2);
    printf("Unescaped:%s",t);
    return 0;
}
void escape(char s[], char t[]) {
    int i = 0;
    int j = 0;
    while (s[j] != '\0') {
        switch (s[j]) {
        case '\\':
            t[i++] = '\\';
            t[i++] = '\\';
            j++;
            break;
        case '\t':
            t[i++] = '\\';
            t[i++] = 't';
            j++;
            break;
        case '\n':
            t[i++] = '\\';
            t[i++] = 'n';
            j++;
            break;
        default:
            t[i++] = s[j++];
            break;
        }
    }
    t[i] = '\0';
}

void unescape(char s[], char t[]){
    int i = 0;
    int j = 0;
    for(int k=0;s[k]!='\0';k++){
        switch(s[k]){
            case '\\':
              switch(s[++k]){
                case 'n':
                    t[j++]='\n';
                    k++;
                    break;
                case 't':
                    t[j++]='\t';
                    k++;
                    break;
                case '\\':
                    t[j++]='\\';
                    k++;
                    break;
              }
        default:
            t[j++]=s[k];
        }
    }
    t[j] = '\0';
}
