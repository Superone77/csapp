//hex2dd.c
#include "csapp.h"

int main(int argc, char** argv){
    struct in_addr in_addr;
    uint32_t addr;
    char buf[MAXBUF];
    
    if(argc != 2){
        fprintf(stderr, "usage: %s <hex number>\n",argv[0]);
        exit(0);
    }
    
    sscanf(argv[1], "%x", &addr);
    in_addr.s_addr=htonl(addr);
    
    if(!inet_ntop(AF_INET, &in_addr, buf,MAXBUF))
        unix_error("inet_ntop");
    printf("%s\n",buf);
    exit(0);
}
