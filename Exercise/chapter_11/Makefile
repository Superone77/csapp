test: 11_4.o csapp.o
	gcc 11_4.o csapp.o -o test
csapp.o: csapp.c csapp.h
	gcc -c csapp.c -o csapp.o
11_4.o: csapp.h 11_4.c
	gcc -c 11_4.c -o 11_4.o
clean:
	rm -f *.o test
