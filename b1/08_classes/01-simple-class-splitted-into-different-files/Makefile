COMPILE-FLAGS = -std=c++14 -Wall -Wextra -g

output: main.o Pen.o
	g++ main.o Pen.o -o output

main.o: main.cpp
	g++ -c main.cpp $(COMPILE-FLAGS)

Pen.o: Pen.cpp
	g++ -c Pen.cpp $(COMPILE-FLAGS)

clean:
	rm *.o output
