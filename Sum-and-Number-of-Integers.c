#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[100];
    char *token;
    int sum = 0, count = 0;
    printf("Enter a string of integers separated by spaces: ");
    scanf("%[^\n]s",input);
    token = strtok(input, " ");
    while (token != NULL) {
        sum += atoi(token);
        count++;
        token = strtok(NULL, " ");
    }
    printf("Sum of integers: %d\n", sum);
    printf("Total number of integers: %d\n", count);

    return 0;
}
