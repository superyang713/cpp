COMPILE-FLAGS = -std=c++14 -Wall -Wextra -g

output: main.o
	g++ main.o -o output

main.o: main.cpp
	g++ $(COMPILE-FLAGS) -c main.cpp

clean:
	rm *.o output
