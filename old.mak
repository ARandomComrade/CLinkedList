cc=cc
cflags=-g
ldflags=
all:
	$(cc) $(cflags) $(ldflags) -o list snode.c dnode.c main.c

clean:
	rm -f *.o list
