#include <stdio.h>

int main() {
    int ids[10];

    for (int i = 0; i < 10; i++) {
    	printf("Enter ID No.%d: ", i + 1);
        scanf("%d", &ids[i]);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < i; j++) {
            if (ids[i] == ids[j]) {
                ids[i] = -1;
            
            }
        }
    }
    
    printf("Updated array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", ids[i]);
    }

}
