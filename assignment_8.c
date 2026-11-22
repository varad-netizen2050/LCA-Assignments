#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int first, second;

    printf("Enter the first number: ");
    scanf("%d", &first);

    printf("Enter the second number: ");
    scanf("%d", &second);

    printf("\nBefore Swapping:\n");
    printf("First number=%d, Second number=%d\n", first, second);

    swap(&first, &second);

    printf("After Swapping:\n");
    printf("First number=%d, Second number=%d\n", first, second);

    return 0;
}
