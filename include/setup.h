#ifndef C_SECURE_SETUP_H
#define C_SECURE_SETUP_H

#include <stdio.h>

#include "server.h"

void setup() {
    printf("Setting up...\n");
    printf("Server\n");
    server();
    client();
}

#endif //C_SECURE_SETUP_H
