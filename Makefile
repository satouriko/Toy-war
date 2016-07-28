all: Toywar

test: test.o
	g++ test.o -o test

Toywar: main.o
	g++ main.o -o Toywar

test.o: test.cpp
	g++ -c test.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm -rf *.o Toywar test
