#include <stdio.h>

int main() {
    int cardValid, pinCorrect;
    float amount, balance;

    printf("Is Card Valid? (1=Yes, 0=No): ");
    scanf("%d", &cardValid);

    if (cardValid == 1) {

        printf("Is PIN Correct? (1=Yes, 0=No): ");
        scanf("%d", &pinCorrect);

        if (pinCorrect == 1) {

            printf("Enter Account Balance: ");
            scanf("%f", &balance);

            printf("Enter Transaction Amount: ");
            scanf("%f", &amount);

            if (amount <= balance && amount > 0) {
                printf("Transaction Successful\n");
            } 
            else {
                printf("Insufficient Funds\n");
            }

        } 
        else {
            printf("Invalid PIN\n");
        }

    } 
    else {
        printf("Invalid Card\n");
    }

    return 0;
}
