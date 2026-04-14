#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    char copy[100];
    char formatted[150] = "Email: ";

    printf("Enter email: ");
    scanf("%s", email);

    strcpy(copy, email);

    char *atPtr = strchr(copy, '@');

    if (atPtr == NULL) {
        printf("Error: Invalid email (no '@' found)\n");
        return 1;
    }

    char *domain = atPtr + 1;

    if (strstr(domain, ".") == NULL) {
        printf("Error: Invalid domain (no '.' found)\n");
        return 1;
    }

    printf("Domain: %s\n", domain);

    strcat(formatted, copy);

    printf("%s\n", formatted);

    return 0;
}
