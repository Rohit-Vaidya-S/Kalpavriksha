#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char *str1 = (char *)malloc(sizeof(char));
    char *str2 = (char *)malloc(sizeof(char));
    char *resultantStr = (char *)malloc(sizeof(char));
    printf("Enter two strings each by pressing enter key\n");
    scanf("%[^\n]s",str1);
    scanf(" %[^\n]s",str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int k = 0;
    for(int i = 0; i < len1; i++){
        int found = 0;
        for(int j = 0; j < len2; j++){
            if(str1[i] == str2[j]){
                found = 1;
                break;
            }
        }
        if(!found){
            resultantStr[k++] = str1[i];
        }
    }
    for(int i = 0; i < len2; i++){
        int found = 0;
        for(int j = 0; j < len1; j++){
            if(str2[i] == str1[j]){
                found = 1;
                break;
            }
        }
        if(!found){
            resultantStr[k++] = str2[i];
        }
    }
    resultantStr[k] = '\0';
    printf("%s", resultantStr);
    free(str1);
    free(str2);
    free(resultantStr);
  
    return 0;
}
