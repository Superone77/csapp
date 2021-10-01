test: 11_3.o csapp.o
	gcc 11_3.o csapp.o -o test
csapp.o: csapp.c csapp.h
	gcc -c csapp.c -o csapp.o
11_3.o: csapp.h 11_3.c
	gcc -c 11_3.c -o 11_3.o
clean:
	rm -f *.o test
