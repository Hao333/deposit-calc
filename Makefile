CC = gcc
BUILD_F = build/
BIN_F = bin/
SRC_F = src/
TEST_F = test/
SOURCES_O = main.o deposit.o
CFLAGS = -Wall

all: build deposit test

build:
	test ! -d bin && mkdir bin
	test ! -d build && mkdir build

deposit: $(SOURCES_O)
	 $(CC) $(CFLAGS) $(BUILD_F)main.o $(BUILD_F)deposit.o -o $(BIN_F)deposit
main.o : $(SRC_F)main.c
	$(CC) $(CFLAGS) -c $(SRC_F)main.c -o $(BUILD_F)main.o
deposit.o : $(SRC_F)deposit.c
	$(CC) $(CFLAGS) -c $(SRC_F)deposit.c -o $(BUILD_F)deposit.o

clean:
	rm -rf $(BIN_F)*
	rm -rf $(BUILD_F)*
delete:
	rm -rf $(BIN_F)
	rm -rf $(BUILD_F)

test: build tests.o
	$(CC) $(CFLAGS) $(BUILD_F)tests.o -o $(BIN_F)tests
tests.o:
	$(CC) $(CFLAGS) -c $(TEST_F)main.c -o $(BUILD_F)tests.o

.PHONY: all clean
