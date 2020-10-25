#ifndef C_SECURE_BOT_H
#define C_SECURE_BOT_H

#include <stdio.h>

int system(char argument[1000]) {
    printf("SYSTEM: %s", argument);
    return 0;
}

#endif //C_SECURE_BOT_H
