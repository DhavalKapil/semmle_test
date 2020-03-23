CC=gcc

all:
	gcc source.c -o bin_source

clean:
	rm -f bin_*
