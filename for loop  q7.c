#include <stdio.h>
int main() {
    int n, sum = 0, digit;
    printf("Enter an integer: ");
    scanf("%d", &n);

    for (; n != 0; n /= 10) {
        digit = n % 10;
        sum += digit;
    }
    printf("Sum of digits = %d", sum);
    return 0;
}
