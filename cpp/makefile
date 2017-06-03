CXX = g++
CXXFLAGS = -Wall -std=c++11
SRCS = $(wildcard lecs/*.cpp)

go: main
	./main

main: main.o $(patsubst %.cpp, %.o, $(SRCS))
	$(CXX) $^ -o $@

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c $<

%.o: %.cpp %.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o
	rm -f lecs/*.o
	rm -f main
