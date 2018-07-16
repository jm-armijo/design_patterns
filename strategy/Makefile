CXXFLAGS = -std=c++11 -pedantic -Werror -Wall -I.
CXX = g++

run: main.o
	$(CXX) $(CXXFLAGS) -o run main.o Strategy.o

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp Strategy.cpp

clean:
	rm main.o run
	

