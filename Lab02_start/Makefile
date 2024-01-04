
CC = gcc
OBJS = lab2.o arrays.o exe.o prog.o
EXEC = demo
DEBUG = -g
CFLAGS = -Wall -Werror $(DEBUG)

$(EXEC): $(OBJS)
	$(CC) $(OBJS) -o $@

lab2.o: lab2.c lab2.h
exe.o: exe.c exe.h arrays.h lab2.h
arrays.o: arrays.c arrays.h
prog.o: prog.c exe.h

clean:
	rm -f $(OBJS) $(EXEC)
