CC ?= gcc

# PWD = $(shell pwd)
INCDIR = -I../src

OUT = ooc loop bashcolor

help:
	@echo 'select one example to compile or "make all" to compile all example'
	@echo '- ooc'
	@echo '- loop'
	@echo '- bashcolor'

all: $(OUT)

ooc:
	$(CC) -o $@ ooc.c $(INCDIR)

loop:
	$(CC) -o $@ loop.c $(INCDIR)

bashcolor:
	$(CC) -o $@ bashcolor.c $(INCDIR)

clean:
	-rm -f $(OUT)
.PHONY: clean