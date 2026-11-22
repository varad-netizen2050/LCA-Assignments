#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[100], s2[100], ch;
    int choice;

    do {
        printf("\n1. strlen\n2. strcpy\n3. strcat\n4. strcmp\n5. strchr\n6. strstr\n7. Exit\nChoice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                printf("Enter string: ");
                fgets(s1, sizeof(s1), stdin);
                s1[strcspn(s1, "\n")] = '\0';
                printf("Length: %lu\n", strlen(s1));
                break;

            case 2:
                printf("Enter string: ");
                fgets(s1, sizeof(s1), stdin);
                s1[strcspn(s1, "\n")] = '\0';
                strcpy(s2, s1);
                printf("Copied: %s\n", s2);
                break;

            case 3:
                printf("Enter first string: ");
                fgets(s1, sizeof(s1), stdin);
                s1[strcspn(s1, "\n")] = '\0';
                printf("Enter second string: ");
                fgets(s2, sizeof(s2), stdin);
                s2[strcspn(s2, "\n")] = '\0';
                strcat(s1, s2);
                printf("Concatenated: %s\n", s1);
                break;

            case 4:
                printf("Enter first string: ");
                fgets(s1, sizeof(s1), stdin);
                s1[strcspn(s1, "\n")] = '\0';
                printf("Enter second string: ");
                fgets(s2, sizeof(s2), stdin);
                s2[strcspn(s2, "\n")] = '\0';
                printf("Result: %d\n", strcmp(s1, s2));
                break;

            case 5:
                printf("Enter string: ");
                fgets(s1, sizeof(s1), stdin);
                s1[strcspn(s1, "\n")] = '\0';
                printf("Enter char: ");
                scanf(" %c", &ch);
                getchar();
                printf("Found at: %s\n", strchr(s1, ch));
                break;

            case 6:
                printf("Enter main string: ");
                fgets(s1, sizeof(s1), stdin);
                s1[strcspn(s1, "\n")] = '\0';
                printf("Enter substring: ");
                fgets(s2, sizeof(s2), stdin);
                s2[strcspn(s2, "\n")] = '\0';
                printf("Found at: %s\n", strstr(s1, s2));
                break;

            case 7:
                break;

            default:
                printf("Invalid choice\n");
        }
    } while (choice != 7);

    return 0;
}
