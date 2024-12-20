CXX = g++
CXXFLAGS = -std=c++14 -Wall
SRC_DIR = src
EXE_DIR = bin

all: day1

%.o: $(SRC_DIR)/%.cc
	$(CXX) $(CXXFLAGS) $^ -c -o $@

day1: day1.o
	$(CXX) $(CXXFLAGS) $^ -o $(EXE_DIR)/$@
	rm -f *.o

clean:
	rm -f *.o
	rm -f day1