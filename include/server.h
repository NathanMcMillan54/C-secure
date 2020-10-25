#ifndef C_SECURE_SERVER_H
#define C_SECURE_SERVER_H

#include "../server/client.c"
#include "../server/server.c"


void start_server() {
    server();
}

void connect_client() {
    client();
}

#endif //C_SECURE_SERVER_H
