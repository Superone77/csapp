//
// Created by Superone77 on 2021/9/29.
//

#include "csapp.h"

int main()
{
    int fd1, fd2;

    fd1 = Open("foo.txt", O_RDONLY,0);
    Close(fd1);
    fd2= Open("baz.txt",O_RDONLY,0);

}