#include <stdio.h>
#include <string.h>

int main() {
    char list[6][20];
    int seen[6] = {0};

    for (int i = 0; i < 6; i++) {
        printf("Enter Word %d: ", i + 1);
        scanf("%s", list[i]);
    }

    for (int i = 0; i < 6; i++) {

        if (seen[i] == 1)
            continue;

        int count = 1;

        for (int j = i + 1; j < 6; j++) {
            if (strcmp(list[i], list[j]) == 0) {
                count++;
                seen[j] = 1;
            }
        }

        printf("\nWord: ");

        for (int k = 0; list[i][k] != '\0'; k++) {
            printf("%c ", list[i][k]);
        }

        printf("\nOccurs %d times\n", count);
    }

    return 0;
}
