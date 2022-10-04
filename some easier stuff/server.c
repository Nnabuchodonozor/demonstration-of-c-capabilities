#include <stdio.h>
#include <netdb.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>

#define SA struct sockaddr

int main(){
    //file descriptors, for some reason, c needs file descriptors to access various stuff, idk why but lets just roll with it
    int socket_fd, connection_fd, length;
    // struct as something that holds multiple info this is taken from netinet in library
    struct sockaddr_in servaddr, cli;

    // initialise socket, create fd, that points to it 
    socket_fd = socket(AF_INET,SOCK_STREAM,0);  // af inet, specifies that it will be tcp or udp

    if (socket_fd == -1)
    {
        printf("socket was not created \n");
        exit(1);
    }
    
    




}