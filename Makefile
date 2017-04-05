CC=gcc CFLAGS=-c -Wall -Werror
Executable=depost,Source=deposit.h.main.c.deposit.c
objects=$(Source:.c=.0)
all:$(Executable)$(Source)
$(Executable):$(objects)
	$(CC)$(objects) -o $@
.c.o:
	$(CC)$(CFLAGS) $c -o $@
clean:
	rm -rf *.o *.exe
PHONY:all clean install uninstall
