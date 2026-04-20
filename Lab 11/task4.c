#include <stdio.h>

struct Patient {
    char name[50];
    int age;
    char bloodType[5];
    int patientID;
    char diagnosis[100];
};

void displayAll(struct Patient p[], int n) {
    printf("\n--- Patient Records ---\n");

    for (int i = 0; i < n; i++) {
        printf("\nPatient %d:\n", i + 1);
        printf("ID: %d\n", p[i].patientID);
        printf("Name: %s\n", p[i].name);
        printf("Age: %d\n", p[i].age);
        printf("Blood Type: %s\n", p[i].bloodType);
        printf("Diagnosis: %s\n", p[i].diagnosis);
    }
}

void searchByID(struct Patient p[], int n, int id) {
    for (int i = 0; i < n; i++) {
        if (p[i].patientID == id) {
            printf("\nPatient Found:\n");
            printf("ID: %d\n", p[i].patientID);
            printf("Name: %s\n", p[i].name);
            printf("Age: %d\n", p[i].age);
            printf("Blood Type: %s\n", p[i].bloodType);
            printf("Diagnosis: %s\n", p[i].diagnosis);
            return;
        }
    }

    printf("\nPatient not found\n");
}

int main() {
    struct Patient p[5];
    int i, searchID;

    for (i = 0; i < 5; i++) {
        printf("\nEnter details for patient %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &p[i].patientID);
        getchar();

        printf("Name: ");
        fgets(p[i].name, 50, stdin);

        printf("Age: ");
        scanf("%d", &p[i].age);
        getchar();

        printf("Blood Type: ");
        fgets(p[i].bloodType, 5, stdin);

        printf("Diagnosis: ");
        fgets(p[i].diagnosis, 100, stdin);
    }

    displayAll(p, 5);

    printf("\nEnter ID to search: ");
    scanf("%d", &searchID);

    searchByID(p, 5, searchID);

    return 0;
}
