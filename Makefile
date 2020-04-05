CC=gcc

all:
	gcc source.c -o bin_source
	gcc macro_impl.c macro.c -o bin_macro

clean:
	rm -f bin_*
