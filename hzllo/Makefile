CXX = g++
CXXFLAGS = -pedantic -ansi -std=c++11
LDFLAGS = 

SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)
EXEC = hzllo

all: $(EXEC)

hzllo: $(OBJ)
	$(CXX) -o $(EXEC) $^ $(LDFLAGS)

%.o: %.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)

clean:
	rm -rf $(OBJ) $(EXEC)