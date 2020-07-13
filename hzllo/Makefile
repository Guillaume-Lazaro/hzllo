CXX = g++
CXXFLAGS = -pedantic -std=c++11
LDFLAGS = -lgdi32

SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)
EXEC = hzllo

all: $(EXEC)

# $(EXEC): $(OBJ)
# 	$(CXX) -o $@ $^
hzllo: $(OBJ)
	$(CXX) -o $(EXEC) $^ $(LDFLAGS)

%.o: %.cpp
	$(CXX) -c -o $@ $^ $(CXXFLAGS)

clean:
	rm -rf $(OBJ) $(EXEC)