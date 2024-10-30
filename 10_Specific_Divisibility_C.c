#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 7 == 0 && num % 11 != 0)
        printf("The number meets the criteria.\n");
    else
        printf("The number does not meet the criteria.\n");
        
    return 0;
}