#ifndef TCP
#define TCP
#include<stdio.h>
#include<sys/socket.h>
#include<stdlib.h>
#include<netinet/ip.h>
//numeric TYPES
typedef int S32;
typedef unsigned int U32;

void createServer();
#define EXIT(con) {if (con) {exit(-1);}}
#define PORT 5000
#define BACKLOG 10
#endif
