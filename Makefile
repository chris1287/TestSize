CC=g++

all: testSize

testSize: testSize.o
	$(CC) testSize.o -o testSize

testSize.o: testSize.c
	$(CC) -c testSize.c

clean:
	rm -f testSize *.o
