#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Deleting duplicate strings from an sotred data.

int main() {
    char *storeData;
    int maxLen = 100; 
    storeData = (char *)malloc(maxLen * sizeof(char));
    scanf("%[^\n]s", storeData);
    char *token = strtok(storeData, " "); 
    char *words[100]; 
    int i, j, count = 0;
    while (token != NULL) {
        for (i = 0; i < count; i++) {
            if (strcmp(words[i], token) == 0) {
                break;
            }
        }
        if (i == count) {
            words[count++] = token;
        }
        token = strtok(NULL, " ");
    }
    for (j = 0; j < count; j++) {
        printf("%s ", words[j]);
    }
    free(storeData);
    
    return 0;
}
