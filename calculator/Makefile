# Makefile

CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99
SRC =  main.c
LIB_SRC = lcalc_diff.c  lcalc_fact.c  lcalc_fract.c  lcalc_prod.c  lcalc_sroot.c  lcalc_sum.c 
OBJ = $(SRC:.c=.o)
LIB_OBJ = $(LIB_SRC:.c=.o)
LIB = libmylib.a

all: $(LIB) main

$(LIB): $(LIB_OBJ)
	ar rcs $@ $(LIB_OBJ)

main: main.o $(LIB)
	$(CC) $(CFLAGS) -o $@ main.o -L. -lmylib -lm

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(LIB_OBJ) $(LIB) main

.PHONY: all clean
