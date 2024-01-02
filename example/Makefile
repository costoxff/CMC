CC ?= gcc

# PWD = $(shell pwd)
INCDIR = -I../src

EXDIR = example

outputs = ooc loop bashcolor

ooc:
	$(CC) -o $@ ooc.c $(INCDIR)

loop:
	$(CC) -o $@ loop.c $(INCDIR)

bashcolor:
	$(CC) -o $@ bashcolor.c $(INCDIR)

clean:
	-rm -f $(outputs)
.PHONY: clean