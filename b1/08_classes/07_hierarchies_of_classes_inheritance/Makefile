COMPILE-FLAGS = -std=c++14 -Wall -Wextra -g

output: main.o Toyota.o base.o
	g++ main.o Toyota.o base.o -o output

main.o: main.cpp
	g++ -c main.cpp $(COMPILE-FLAGS)

Toyota.o: Toyota.cpp base.cpp
	g++ -c Toyota.cpp $(COMPILE-FLAGS)

base.o: base.cpp
	g++ -c base.cpp $(COMPILE-FLAGS)

clean:
	rm *.o output
