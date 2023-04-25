#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char *storeData;
    int maxLen = 100; // maximum length of input string
    storeData = (char *)malloc(maxLen * sizeof(char));
    scanf("%[^\n]s",storeData);
    printf("%s", storeData);
    char *digits, *characters;
    digits = (char *)malloc(maxLen * sizeof(char));
    characters = (char *)malloc(maxLen * sizeof(char));
    int i, j, k;
    j = 0;
    k = 0;
    for(i = 0; storeData[i] != '\0'; i++) {
        if (isdigit(storeData[i])) {
            digits[j++] = storeData[i];
        }
        else if (isalpha(storeData[i]) ) {
            characters[k++] = storeData[i];
        }
    }
    digits[j] = '\0';
    characters[k] = '\0';
    printf("\nDigits: %s\n", digits);
    printf("Characters: %s\n", characters);
    free(storeData);
    free(digits);
    free(characters);
    
    return 0;
}
