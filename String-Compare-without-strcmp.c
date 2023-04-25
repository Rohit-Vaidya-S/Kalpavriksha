#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i = 0, len1, len2;
    printf("Enter the first string: ");
    scanf("%[^\n]s",str1);
    len1 = strlen(str1);
    printf("Enter the second string: ");
    scanf(" %[^\n]s",str2);
    len2 = strlen(str2);
    while (i < len1 && i < len2) {
        if (str1[i] != str2[i]) {
            printf("Strings are not equal.");
            return 0;
        }
        i++;
    }
    if (len1 == len2) {
        printf("Strings are equal.");
    } 
    else {
        printf("Strings are not equal.");
    }
    
    return 0;
}
