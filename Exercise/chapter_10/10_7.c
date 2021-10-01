/* $begin cpfile */
#include "csapp.h"

int main(int argc, char **argv)
{
    int n;
    rio_t rio;
    char buf[MAXLINE];

    Rio_readinitb(&rio, STDIN_FILENO);
    // 5 for test
    while((n = Rio_readnb(&rio, buf, 5)) != 0) {//assume MAXBUF=5
        Rio_writen(STDOUT_FILENO, buf, n);
    }

    exit(0);
}
/* $end cpfile */
