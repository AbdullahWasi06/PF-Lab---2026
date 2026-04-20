#include <stdio.h>
#include <string.h>

struct Order {
    int orderID;
    char customerName[50];
    char productName[50];
    int quantity;
    float unitPrice;
    char status[20];
};

float computeTotal(struct Order o) {
    return o.quantity * o.unitPrice;
}

void filterByStatus(struct Order orders[], int n, char *status) {
    int found = 0;

    printf("\nOrders with status: %s\n", status);

    for (int i = 0; i < n; i++) {
        if (strcmp(orders[i].status, status) == 0) {
            printf("\nOrder ID: %d\n", orders[i].orderID);
            printf("Customer: %s\n", orders[i].customerName);
            printf("Product: %s\n", orders[i].productName);
            printf("Quantity: %d\n", orders[i].quantity);
            printf("Unit Price: %.2f\n", orders[i].unitPrice);
            printf("Total Bill: %.2f\n", computeTotal(orders[i]));
            printf("Status: %s\n", orders[i].status);
            found = 1;
        }
    }

    if (!found) {
        printf("No orders found.\n");
    }
}

int main() {
    struct Order o[4];
    int i;
    char searchStatus[20];

    for (i = 0; i < 4; i++) {
        printf("\nEnter details for Order %d\n", i + 1);

        printf("Order ID: ");
        scanf("%d", &o[i].orderID);
        getchar();

        printf("Customer Name: ");
        fgets(o[i].customerName, 50, stdin);

        printf("Product Name: ");
        fgets(o[i].productName, 50, stdin);

        printf("Quantity: ");
        scanf("%d", &o[i].quantity);

        printf("Unit Price: ");
        scanf("%f", &o[i].unitPrice);
        getchar();

        printf("Status: ");
        fgets(o[i].status, 20, stdin);
    }

    printf("\n--- Order Bills ---\n");

    for (i = 0; i < 4; i++) {
        printf("\nOrder ID: %d\n", o[i].orderID);
        printf("Customer: %s", o[i].customerName);
        printf("Product: %s", o[i].productName);
        printf("Quantity: %d\n", o[i].quantity);
        printf("Unit Price: %.2f\n", o[i].unitPrice);
        printf("Total Bill: %.2f\n", computeTotal(o[i]));
        printf("Status: %s", o[i].status);
    }

    printf("\nEnter status to filter (Pending/Shipped/Delivered): ");
    fgets(searchStatus, 20, stdin);

    filterByStatus(o, 4, searchStatus);

    return 0;
}
