#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float weight, height, age, result;

    printf("Health Calculator\n");
    printf("1. BMI Calculation\n");
    printf("2. BMR Calculation\n");
    printf("3. Ideal Weight (Devine Formula)\n");
    printf("4. Heart Rate Zone\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1: 
            printf("Enter weight (kg): ");
            scanf("%f", &weight);
            printf("Enter height (m): ");
            scanf("%f", &height);

            if (weight > 0 && height > 0) {
                result = weight / pow(height, 2);
                printf("BMI = %.2f\n", result);
            } else {
                printf("Invalid input\n");
            }
            break;

        case 2: 
            printf("Enter weight (kg): ");
            scanf("%f", &weight);
            printf("Enter height (cm): ");
            scanf("%f", &height);
            printf("Enter age: ");
            scanf("%f", &age);

            if (weight > 0 && height > 0 && age > 0) {
                result = 10 * weight + 6.25 * height - 5 * age + 5;
                printf("BMR = %.2f\n", result);
            } else {
                printf("Invalid input\n");
            }
            break;

        case 3: 
            printf("Enter height (inches): ");
            scanf("%f", &height);

            if (height > 0) {
                result = 50 + 2.3 * (height - 60);
                printf("Ideal Weight = %.2f kg\n", result);
            } else {
                printf("Invalid input\n");
            }
            break;

        case 4: 
            printf("Enter age: ");
            scanf("%f", &age);

            if (age > 0) {
                float maxHR = 220 - age;
                printf("Target Heart Rate Zone: %.2f - %.2f bpm\n",
                       0.5 * maxHR, 0.85 * maxHR);
            } else {
                printf("Invalid input\n");
            }
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
