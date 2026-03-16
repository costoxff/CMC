PROJECT_ROOT_DIR := $(CURDIR)

export PROJECT_ROOT_DIR

example:
	$(MAKE) -C example
.PHONY: example

clean:
	$(MAKE) -C example clean
