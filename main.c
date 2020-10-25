#include <stdio.h>

#include "include/setup.h"
#include "include/bot.h"
#include "include/messages.h"

void setup_app() {
    printf("Setting up C-secure chat app...\n");
    setup();
}


_Noreturn int app() {
    char message[1000];
    for (;;) {
        printf("Enter message: ");
        scanf("%s[^\t\n]", message);

        printf("%s \n", message);
        bot("Deleting message\n");
        deletet_messages();
    }
}

int main() {
    printf("C-secure\n");
    printf("Starting setup...\n");
    setup_app();
    app();
}
