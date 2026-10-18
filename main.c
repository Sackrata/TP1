#include <stdio.h>

int main() {
    printf("Программа запущена\n");
    int a, b;
    printf("Введите первое число: ");
    scanf("%d", &a);
    printf("Введите второе число: ");
    scanf("%d", &b);
    printf("Сумма: %d\n", a + b);
    return 0;
}