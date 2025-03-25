MAKEFLAGS += -C ../
CC ?= gcc

build: 
	pwd
	$(CC) -g test/test.c delog.c -I./ -o delog_test 
	gdb -x scripts/gdb_printf.py delog_test

clean:
	rm delog_test
