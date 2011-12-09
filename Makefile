all: testSize

testSize: testSize.o
	gcc testSize.o -o testSize

testSize.o: testSize.c
	gcc -c testSize.c

clean:
	rm -f testSize *.o
