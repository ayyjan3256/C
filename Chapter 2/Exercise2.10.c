#include <stdio.h>
char lower(char letter){
    letter=(letter>=65 && letter<=90)?letter+32:letter;//A=65,C=90 add 32 to reach the lower case letters
    return letter;
}

int main(){
    printf("%c",lower('A'));
    return 0;
}
