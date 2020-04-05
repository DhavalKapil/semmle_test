CC=gcc

all:
	gcc source.c -o bin_source
	gcc macro.c -o bin_macro

clean:
	rm -f bin_*
