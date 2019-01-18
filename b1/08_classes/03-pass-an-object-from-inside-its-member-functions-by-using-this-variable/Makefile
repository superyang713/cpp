COMPILE-FLAGS = -std=c++14 -Wall -Wextra -g

output: main.o Cheese.o
	g++ main.o Cheese.o -o output

main.o: main.cpp
	g++ -c main.cpp $(COMPILE-FLAGS)

Cheese.o: Cheese.cpp
	g++ -c Cheese.cpp $(COMPILE-FLAGS)

clean:
	rm *.o output
