#include <stdio.h>
int main() {
    int a, b, result = 1;
    printf("Enter base (a): ");
    scanf("%d", &a);
    printf("Enter exponent (b): ");
    scanf("%d", &b);

    for (int i = 1; i <= b; i++) {
        result *= a;
    }
    printf("%d^%d = %d", a, b, result);
    return 0;
}
