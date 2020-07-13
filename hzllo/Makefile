CXX = g++
CXXFLAGS = -pedantic -ansi -std=c++11
LDFLAGS = 

SRC_DIR := src
OBJ_DIR := src/obj
BIN_DIR := bin
INCLUDE_DIR := include

SRC = $(wildcard $(SRC_DIR)/*.cpp)
OBJ = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
EXEC = $(BIN_DIR)/hzllo

all: $(EXEC)

$(EXEC): $(OBJ) | $(BIN_DIR)
	$(CXX) -o $(EXEC) $^ $(LDFLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

clean:
	rm -rf $(OBJ) $(EXEC)