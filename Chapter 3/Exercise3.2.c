#include <stdio.h>
void escape(char s[],char t[]);
int main(){
    char s[] = "Start\tColumn1\tColumn2\nNext Line with a backslash: \\";
    char t[1000];
    escape(s,t);
    printf("Original:%s\n",s);
    printf("Escaped:%s",t);
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
