#include <stdio.h>

long factorial_recursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return ( n * factorial_recursive(n - 1) );
}

long factorial_iterative(int n) {
    long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main(void) {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    printf("Factorial of number (with recursion) = %ld\n", factorial_recursive(n));
    printf("Factorial of number (without recursion) = %ld\n", factorial_iterative(n));

    return 0;
}
