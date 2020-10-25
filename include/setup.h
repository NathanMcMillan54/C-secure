#ifndef C_SECURE_SETUP_H
#define C_SECURE_SETUP_H

#include <stdio.h>

#include "server.h"

void setup() {
    printf("Setting up...\n");
    printf("Server\n");
    start_server();
    connect_client();
}

#endif //C_SECURE_SETUP_H
