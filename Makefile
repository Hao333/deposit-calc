CC = gcc
BUILD_F = build/
BIN_F = bin/
SRC_F = src/

SOURCES_O = main.o deposit.o
CFLAGS = -Wall -Werror

all:  deposit

deposit-calc:
	mkdir build bin

deposit: deposit-calc $(SOURCES_O)
	 $(CC) $(CFLAGS) $(BUILD_F)main.o $(BUILD_F)deposit.o -o $(BIN_F)deposit
main.o : $(SRC_F)main.c
	$(CC) $(CFLAGS) -c $(SRC_F)main.c -o $(BUILD_F)main.o
deposit.o : $(SRC_F)deposit.c
	$(CC) $(CFLAGS) -c $(SRC_F)deposit.c -o $(BUILD_F)deposit.o
clean:
	rm -rf $(BIN_F)*
	rm -rf $(BUILD_F)*
