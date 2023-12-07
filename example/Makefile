CC ?= gcc

# PWD = $(shell pwd)
INCDIR = -I../src

EXDIR = example

outputs = ooc loop

ooc:
	$(CC) -o $@ ooc.c $(INCDIR)

loop:
	$(CC) -o $@ loop.c $(INCDIR)

clean:
	rm -rf $(outputs)