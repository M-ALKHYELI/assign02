# Makefile

CC = gcc
CFLAGS = -Wall -Wextra -I../include

CXX = g++
CXXFLAGS = -std=c++11 -I../include

TARGET = problem1

TOP_DIR = $(shell pwd)/..
SRC_DIR = $(TOP_DIR)/src
OBJ_DIR = $(TOP_DIR)/obj

C_SOURCES = $(wildcard $(SRC_DIR)/*.c)
CPP_SOURCES = $(wildcard $(SRC_DIR)/$(TARGET).cpp)

C_OBJECTS = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(C_SOURCES))
CPP_OBJECTS = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(CPP_SOURCES))

all: $(TARGET)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(TARGET): $(C_OBJECTS) $(CPP_OBJECTS)
	$(CXX) -o $@ $^

clean:
	rm -f $(OBJ_DIR)/*.o $(TARGET) problem1 problem2 problem3
