#include <stdio.h>

/* 
   any(s1, s2)
   Returns the first index in s1 where any character 
   from s2 appears. Returns -1 if no match is found.
*/
int any(char s1[], char s2[]);

int main() {
    char a[] = "Micro-Controller";   // string to search in
    char b[] = "b";                  // characters to search for

    int i = any(a, b);               // function call
    printf("%d", i);                 // print result

    return 0;
}

int any(char s1[], char s2[]) {

    // Scan each character of s1
    for (int i = 0; s1[i] != '\0'; i++) {

        // Compare with each character of s2
        for (int j = 0; s2[j] != '\0'; j++) {

            // If a match is found, return index
            if (s1[i] == s2[j]) {
                return i;
            }
        }
    }

    // No match found
    return -1;
}
