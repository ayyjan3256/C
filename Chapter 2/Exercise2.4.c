#include <stdio.h>

/*
   squeeze(s1, s2)
   Removes from s1 every character that appears in s2.
   The result is stored back in s1.
*/
void squeeze(char s1[], char s2[]);

int main() {
    char a[] = "Micro-controller";   // original string
    char b[] = "aeiou";              // characters to remove

    squeeze(a, b);                   // modify a
    printf("%s", a);                 // print modified string

    return 0;
}

void squeeze(char s1[], char s2[]) {

    int k = 0;   // position to write kept characters

    // Scan each character of s1
    for (int i = 0; s1[i] != '\0'; i++) {

        int found = 0;  // reset for each character

        // Check if s1[i] exists in s2
        for (int j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                found = 1;   // mark for removal
                break;
            }
        }

        // If not found in s2, keep the character
        if (!found) {
            s1[k++] = s1[i];
        }
    }

    s1[k] = '\0';   // terminate modified string
}
