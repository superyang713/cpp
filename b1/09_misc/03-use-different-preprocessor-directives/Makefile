COMPILE-FLAG = -std=c++14 -Wall -Wextra -g

output: main.o
	g++ main.o -o output

main.o: main.cpp
	g++ -c main.cpp $(COMPILE-FLAGS) -D DEBUG -D UNIVAC

clean:
	rm *.o output
