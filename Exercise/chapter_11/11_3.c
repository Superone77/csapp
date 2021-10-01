//dd2hex.c
#include "csapp.h"

int main(int argc, char** argv){
    struct in_addr in_addr;
    int rc;
    
    if(argc != 2){
        fprintf(stderr, "usage: %s <dotted-decimal>\n",argv[0]);
        exit(0);
    }
    rc = inet_pton(AF_INET, argv[1],&in_addr);
    if(rc==0){
        printf("invalid dotted-decimal address!\n");
        exit(0);
    }else if(rc<0){
        unix_error("inet_pton");
    }
    
    printf("0x%x\n",ntohl(in_addr.s_addr));
    exit(0);
}

