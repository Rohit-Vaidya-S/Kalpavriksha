#include<stdio.h>

int stringToInt(char str[]){
    int i=0,sum=0,sign=1;
    if (str[i] == '-') {
        sign = -1;
        i++;
    }
    while(str[i]!='\0'){
        if(str[i]< 48 || str[i] > 57){
            printf("Cannot be converted to integer.\n");
            
            return 0;
        }
        else{
            sum = sum*10 + (str[i] - 48);
            i++;
        }
    }

    return sign * sum;
}

int main(){
    char *str;
    str = (char *)malloc(sizeof(char));
    int intValue;
    printf("Enter any integer as a string: ");
    scanf("%s",str);
    intValue = stringToInt(str);
    printf("Equivalent integer value: %d",intValue);

    return 0;
}
