#include <stdio.h>

int main(void) {
    double a, b;
    int choice;

    do {
        printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\nEnter choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
        }

        switch (choice) {
            case 1:
                printf("Addition is = %.2lf\n", a + b);
                break;

            case 2:
                printf("Subtraction is = %.2lf\n", a - b);
                break;

            case 3:
                printf("Multiplication is = %.2lf\n", a * b);
                break;

            case 4:
                if (b == 0) {
                    printf("Error: Division by zero\n");
                } else {
                    printf("Division is = %.2lf\n", a / b);
                }
                break;

            case 5:
                break;

            default:
                printf("Invalid choice\n");
        }
    } while (choice != 5);

    return 0;
}
