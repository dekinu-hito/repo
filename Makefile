TARGET=mkpass
OBJS=mkpass.o
CC=gcc
$(TARGET):$(OBJS)
	$(CC) -o $@ $<

.c.o:
	$(CC) -c $^

.PHONY: clean
clean:
	$(RM) *.o
