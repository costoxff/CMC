CC ?= gcc

# PWD = $(shell pwd)
INCLUDE_DIR := -I$(PROJECT_ROOT_DIR)/src

OUT = ooc loop bashcolor

all: $(OUT)

help:
	@echo 'select one example to compile or "make all" to compile all example'
	@echo '- ooc'
	@echo '- loop'
	@echo '- bashcolor'
.PHONY: help

ooc:
	$(CC) -o $@ ooc.c $(INCLUDE_DIR)

loop:
	$(CC) -o $@ loop.c $(INCLUDE_DIR)

bashcolor:
	$(CC) -o $@ bashcolor.c $(INCLUDE_DIR)

clean:
	-rm -f $(OUT)
.PHONY: clean