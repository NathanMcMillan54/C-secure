#include <stdio.h>
#include <unistd.h>

#include "include/setup.h"
#include "include/bot.h"

void setup_app() {
    printf("Setting up C-secure chat app...\n");
    setup();
}

void deletet_messages() {
    const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
    write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
}

_Noreturn int start_app() {
    int delete_message_sleep = 5;
    char message[1000];
    for (;;) {
        printf("Enter message: ");
        scanf("%s[^\t\n]", message);

        printf("%s \n", message);
        sleep(delete_message_sleep);
        deletet_messages();
    }
}

int main() {
    printf("C-secure\n");
    printf("Starting setup...\n");
    setup_app();
    start_app();
    return 0;
}
