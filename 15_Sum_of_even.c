#include <stdio.h>

int main() {
    int num1, num2, sum = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    for (int i = num1; i <= num2; i++) {
        if (i % 2 == 0) sum += i;
    }

    printf("Sum of even numbers between %d and %d is %d\n", num1, num2, sum);
    return 0;
}