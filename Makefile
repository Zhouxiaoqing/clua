.PHONY : clean

CC = gcc

CFLAGS = -g -Wall
LDFLAGS = ./libs/liblua.a

lua_test : lua_test.c
	${CC} ${CFLAG} -o $@ $^ ${LDFLAGS} -lm

clean:
	-rm -rf *.o
	-rm -rf lua_test
