#include <stdio.h>
#include <string.h>

struct Department {
    char deptCode[10];
    char deptName[50];
};

struct Course {
    char courseCode[10];
    char courseName[60];
    int creditHours;
    struct Department dept;
};

void showCoursesByDept(struct Course c[], int n, char code[]) {
    int found = 0;

    printf("\nCourses in Department %s:\n", code);

    for (int i = 0; i < n; i++) {
        if (strcmp(c[i].dept.deptCode, code) == 0) {
            printf("\nCourse Code: %s\n", c[i].courseCode);
            printf("Course Name: %s", c[i].courseName);
            printf("Credit Hours: %d\n", c[i].creditHours);
            found = 1;
        }
    }

    if (!found) {
        printf("No courses found for this department.\n");
    }
}

int main() {
    struct Course c[3];
    char searchCode[10];
    int i;

    for (i = 0; i < 3; i++) {
        printf("\nEnter details for Course %d\n", i + 1);

        printf("Course Code: ");
        scanf("%s", c[i].courseCode);

        printf("Course Name: ");
        getchar();
        fgets(c[i].courseName, 60, stdin);

        printf("Credit Hours: ");
        scanf("%d", &c[i].creditHours);

        printf("Department Code: ");
        scanf("%s", c[i].dept.deptCode);

        printf("Department Name: ");
        getchar();
        fgets(c[i].dept.deptName, 50, stdin);
    }

    printf("\n--- Course Catalog ---\n");

    for (i = 0; i < 3; i++) {
        printf("\nCourse %d:\n", i + 1);
        printf("Course Code: %s\n", c[i].courseCode);
        printf("Course Name: %s", c[i].courseName);
        printf("Credit Hours: %d\n", c[i].creditHours);
        printf("Department Code: %s\n", c[i].dept.deptCode);
        printf("Department Name: %s", c[i].dept.deptName);
    }

    printf("\nEnter Department Code to search: ");
    scanf("%s", searchCode);

    showCoursesByDept(c, 3, searchCode);

    return 0;
}
