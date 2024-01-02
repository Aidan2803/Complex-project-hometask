CC := gcc
CFLAGS := -Wall -Werror -Wextra
LDFLAGS := -shared
OBJ := *.o

all: libconverter.so upper lower

libconverter.so: converter.c converter.h
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $<

upper: upper.c libconverter.so converter.h
	$(CC) $(CFLAGS) -o $@ $< -L. -lconverter

lower: lower.c libconverter.so converter.h
	$(CC) $(CFLAGS) -o $@ $< -L. -lconverter

clean:
	rm -f libconverter.so upper lower $(OBJ)
