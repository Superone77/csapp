#include "csapp.h"

int main(int argc, char **argv)
{
    struct stat stat;
    char *type, *readok;
    
    if(argc != 2){
        fprintf(stderr, "usage: %s <filename>\n", argv[0]);
        exit(0);
    }
    
    int fd;
    sscanf(argv[1],"%d",&fd);
    fstat(fd, &stat);
    if(S_ISREG(stat.st_mode))
        type="regular";
    else if(S_ISDIR(stat.st_mode))
        type="directory";
    else
        type="other";
    if((stat.st_mode & S_IRUSR))
        readok="yes";
    else
        readok="no";
    printf("type:%s, read: %s\n", type, readok);
    exit(0);
}
