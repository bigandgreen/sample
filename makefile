#Makefile
all: boj10828

boj10828: main.o
	g++ -o boj10828 main.o

main.o: stack.h main.cpp

clean:
	rm -f boj10828 *.o