#include <stdio.h>

int main() 
{
    double a, b, c, largest;

    printf("Enter any three numbers: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }

    printf("Largest number: %.2lf\n", largest);

    return 0;
}
