test: 10_10.o csapp.o
	gcc 10_10.o csapp.o -o test
csapp.o: csapp.c csapp.h
	gcc -c csapp.c -o csapp.o
10_10.o: csapp.h 10_10.c
	gcc -c 10_10.c -o 10_10.o
clean:
	rm -f *.o test
