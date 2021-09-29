test: 10_1.o csapp.o
	gcc 10_1.o csapp.o -o test
csapp.o: csapp.c csapp.h
	gcc -c csapp.c -o csapp.o
10_1.o: csapp.h 10_1.c
	gcc -c 10_1.c -o 10_1.o
clean:
	rm -f *.o test
