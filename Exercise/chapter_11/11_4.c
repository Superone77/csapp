#include "csapp.h"
#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>

int main(int argc, char **argv){
    struct addrinfo *p, *listp, hints;
    struct sockaddr_in *sockp;
    char buf[MAXLINE];
    int rc;

    if(argc != 2){
        fprintf(stderr, "usage: %s <domain name>\n", argv[0]);
        exit(0);
    }

    /*Get a list of addrinfo records */
    memset(&hints, 0, sizeof(struct addrinfo));
    hints.ai_family=AF_INET;
    hints.ai_socktype = SOCK_STREAM;
    if((rc = getaddrinfo(argv[1], NULL, &hints, &listp)) != 0){
        fprintf(stderr, "getaddrinfo error: %s\n", gai_strerror(rc));
    }

    //分别取出每个addrinfo，为了获得每个主机ip地址
    for(p = listp; p; p = p->ai_next){
        //sockaddr - > sockaddr_in里才有网络字节顺序的IP地址
        sockp=(struct sockaddr_in *)p->ai_addr;
        inet_ntop(AF_INET, &(sockp->sin_addr), buf, MAXLINE);//二进制的网络字节顺序的IP地址转换成点分十进制
        printf("%s\n", buf);
    }

    freeaddrinfo(listp);
    exit(0);
}