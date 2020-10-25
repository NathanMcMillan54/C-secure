#include <stdio.h>

#include "include/C-secure/setup.h"

void setup_app() {
    printf("Setting up C-secure chat app...\n");
    setup();
}

int main() {
    printf("C-secure\n");
    printf("Starting setup...\n");
    setup_app();
    return 0;
}
