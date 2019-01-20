COMPILE-FLAGS = -std=c++14 -Wall -Wextra -g

output: main.o Squirrel.o
	g++ main.o Squirrel.o -o output

main.o: main.cpp
	g++ -c main.cpp $(COMPILE-FLAGS)

Squirrel.o: Squirrel.cpp
	g++ -c Squirrel.cpp $(COMPILE-FLAGS)

clean:
	rm *.o output
