#include <stdio.h>

int main() {
    printf("Program is run\n");
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Amount: %d\n", a - b);
    return 0;
}
