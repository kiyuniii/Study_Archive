all:						# 실행방법: $ make
	@echo this all target

main: main.o copy.o
	@echo main
	gcc -c longest main.o copy.o

main.o: main.c
	gcc- c main.c
	@gcc -c main.c
	@gcc -c copy.c
	@gcc -o longest main.o copy.o

copy.o: copy.c copy.h
	@echo copy.o
	gcc -c copy.c

say:
	@echo ${MSG}

clean:						# 실행방법: $ make clean
	@echo this all target
	@rm *.o
	@rm longest

