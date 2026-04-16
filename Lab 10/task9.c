#include <stdio.h>

int main() {
    
    FILE *fptr;

    fptr = fopen("config.txt", "r");

    if (fptr == NULL) {
        printf("config.txt not found. Creating default config...\n");

        fptr = fopen("config.txt", "w");

        if (fptr == NULL) {
            printf("Error creating file!\n");
            return 1;
        }

        fprintf(fptr, "max_users=50\n");
        fprintf(fptr, "timeout=30\n");
        fprintf(fptr, "theme=light\n");

        fclose(fptr);

        printf("Default config.txt created successfully.\n");
    } 
    else {
        printf("config.txt found successfully.\n");
        fclose(fptr);
    }

    return 0;
}
