#ifndef C_SECURE_MESSAGES_H
#define C_SECURE_MESSAGES_H

#include <unistd.h>

// default sleep time is 5 seconds
int delete_message_sleep = 5;

void deletet_messages() {
    sleep(delete_message_sleep);
    const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
    write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
}

#endif //C_SECURE_MESSAGES_H
