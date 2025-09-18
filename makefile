all: helloworld.c

input: helloworld.c
	gcc -o input helloworld.c

clean: 
	rm -f input

note:
	echo "Freaking Class wants me to use MakeFile instead of makefile in my Macbook it seems"