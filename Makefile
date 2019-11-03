all: rbb main
# compilacao do executável em si, com todos os objetos gerados
main: main.c  
	gcc -Wall -g main.c build/* -o main
rbb:	
	gcc -Wall -g rbb.c -c -o build/rbb.o
run:
	./main
debug:
	valgrind ./main -v