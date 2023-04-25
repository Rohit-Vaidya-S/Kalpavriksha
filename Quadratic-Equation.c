#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[100], sign1='+', sign2, sign3;
    int a, b, c;
    printf("Enter a quadratic expression (e.g. 22x^2 + 3x - 5): ");
    fgets(input, sizeof(input), stdin);
    int num_matched = sscanf(input, "%c%dx^2 %c%dx %c%d",&sign1, &a, &sign2, &b, &sign3, &c);
    if (num_matched == 6 ) {
        printf("a = %c%d, b = %c%d, c = %c%d\n", sign1,a,sign2,b,sign3, c);
    } 
    else {
        printf("Invalid input format\n");
    }
    
    return 0;
}
