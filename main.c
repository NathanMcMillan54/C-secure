#include <stdio.h>

#include "include/C-secure/setup.h"

void setup_app() {
    printf("Setting up C-secure chat app...\n");
    setup();
}

int start_app() {
    char message[1000];

    printf("Enter message: ");
    scanf("%[^\t\n]", message);

    printf("%s \n", message);
    return 0;
}

int main() {
    printf("C-secure\n");
    printf("Starting setup...\n");
    setup_app();
    start_app();
    return 0;
}
