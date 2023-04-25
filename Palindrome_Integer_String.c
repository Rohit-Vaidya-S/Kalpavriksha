#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int original, reversed_int = 0, remainder;
    char str[100], reversed_str[100];
    printf("Enter a string or integer: ");
    scanf("%s", str);
    if (isdigit(str[0])) {
        original = atoi(str);
        int n = original;
        while (n != 0) {
            remainder = n % 10;
            reversed_int = reversed_int * 10 + remainder;
            n /= 10;
        }
            if (original == reversed_int)
                printf("%d is a palindrome.", original);
            else
                printf("%d is not a palindrome.", original);
    } 
    else {
        int i, length;
        length = strlen(str);
        for (i = 0; i < length; i++) {
            reversed_str[length - 1 - i] = str[i];
        }
        reversed_str[length] = '\0'; 
        if (strcmp(str, reversed_str) == 0)
            printf("%s is a palindrome.", str);
        else
            printf("%s is not a palindrome.", str);
    }

    return 0;
}
