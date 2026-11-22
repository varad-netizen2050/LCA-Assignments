#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float marks[3];
    float total;
    float percentage;
};

int main(void) {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter the roll number, name and marks of 3 subjects:\n");
        scanf("%d %49s %f %f %f", &s[i].roll_no, s[i].name, &s[i].marks[0], &s[i].marks[1], &s[i].marks[2]);
        s[i].total = s[i].marks[0] + s[i].marks[1] + s[i].marks[2];
        s[i].percentage = s[i].total / 3.0f;
    }

    printf("\nRoll No\tName\tSubject 1\tSubject 2\tSubject 3\tTotal\tPercentage\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t%.0f\t\t%.0f\t\t%.0f\t\t%.0f\t%.2f\n",
               s[i].roll_no, s[i].name, s[i].marks[0], s[i].marks[1], s[i].marks[2],
               s[i].total, s[i].percentage);
    }

    return 0;
}
