#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[1000];  
    char *token;       
    char *name;
    char *grade_str;   // pointer to grade as string
    int total = 0;     
    int count = 0;     
    printf("Enter a string of comma-separated values representing student grades: ");
    fgets(input, 1000, stdin);
    token = strtok(input, ",");
    while (token != NULL) {
        name = token;
        grade_str = strtok(NULL, ",");
        if (grade_str != NULL) {
            total += atoi(grade_str);
            count++;
        }
        token = strtok(NULL, ",");
    }
    double average = (double) total / count;
    printf("The average grade is %.2f\n", average);

    return 0;
}
