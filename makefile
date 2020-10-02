COMPILER=g++
CPPFLAGS=-Wall -g -pedantic -pedantic-errors -std=c++11

thetrip:
	$(COMPILER) $(CPPFLAGS) -o knapsack knapsack.cpp

clean:
	rm knapsack