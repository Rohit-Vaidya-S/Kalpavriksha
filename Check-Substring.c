// This C program takes two strings as input from the user and checks if the first string is a substring of the second string

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i, j, len1, len2, found = 0;
    printf("Enter first string: ");
    scanf("%[^\n]s",str1);
    getchar();
    printf("Enter second string: ");
    scanf("%[^\n]s",str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    for (i = 0; i <= len2 - len1; i++) {
        for (j = 0; j < len1; j++) {
            if (str2[i+j] != str1[j]) {
                break;
            }
        }
        if (j == len1) {
            found = 1;
            break;
        }
    }
    if (found) {
        printf("%s is a substring of %s\n", str1, str2);
    }
    else {
        printf("%s is not a substring of %s\n", str1, str2);
    }
 
    return 0;
}
