CC=g++
CCFLAGS=-Wall -Werror -std=c++11 -g
SRC_DIR=../src
SRC=$(wildcard $(SRC_DIR)/pbPlots/*.cpp) $(wildcard $(SRC_DIR)/*.cpp)
OBJ= $(SRC:.cpp=.o)
TST= $(wildcard *.cpp)
OBJ_TEST = $(filter-out $(SRC_DIR)/main.o, $(OBJ)) $(TST:.cpp=.o)
EXEC=testcase

all: $(EXEC)

$(EXEC): $(OBJ_TEST)
	$(CC) $^  -o $@

%.o: %.cpp
	$(CC) -I$(SRC_DIR) -o $@ -c $<

clean:
	rm -f $(OBJ_TEST) $(EXEC)
