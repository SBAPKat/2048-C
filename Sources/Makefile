CC=gcc
CFLAGS= -Wall -pedantic -fpic -g

all: GAME.exe

GAME.exe: main.c lib2048.a
	$(CC) main.c -L. -l2048 -o GAME.exe $(CFLAGS) -lncurses
	rm *.o *.a 

lib2048.a: CMD.o Gamelogic.o Init.o check_args.o randomcase.o CMDUtils.o
	ar -rc $@ $^
	ranlib $@

CMD.o: CMD.c
	$(CC) -c $< -lncurses $(CFLAGS)

Gamelogic.o: Gamelogic.c
	$(CC) -c $< $(CFLAGS)

Init.o: Init.c 
	$(CC) -c $< $(CFLAGS)

check_args.o: check_args.c
	$(CC) -c $< $(CFLAGS)

randomcase.o: randomcase.c 
	$(CC) -c $< $(CFLAGS)

CMDUtils.o: CMDUtils.c
	$(CC) -c $<  -lncurses $(CFLAGS)


clean: 
	rm *.exe

run: GAME.exe
	./GAME.exe
	make clean
