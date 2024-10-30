#include <stdio.h>

int main() {
    char name[50], address[100];
    int age;
    float weight, height;

    printf("Enter your name: ");
    gets(name);
    printf("Enter your address: ");
    gets(address);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your weight and height: ");
    scanf("%f %f", &weight, &height);

    printf("\nName: %s\nAddress: %s\nAge: %d\nWeight: %.2f\nHeight: %.2f\n", name, address, age, weight, height);

    return 0;
}