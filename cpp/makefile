CXX = g++
CXXFLAGS = -Wall -std=c++11
LECS = lecs/lec_0.cpp

go: main
	./main

main: main.o $(patsubst %.cpp, %.o, $(LECS))
	$(CXX) $^ -o $@

main.o: main.cpp review.h
	$(CXX) $(CXXFLAGS) -c $<

%.o: %.cpp %.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o
	rm -f lecs/*.o




