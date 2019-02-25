CC = gcc
CFLAGS = -O2 -Wall
CPPFLAGS = -I.
LDFLAGS =

TARGET = cpics2_gen

OBJS = sha1.o cpics2_gen.o

all: $(TARGET)

.c.o:
	$(CC) $(CPPFLAGS) $(CFLAGS) $(FLAGS) -c $<

cpics2_gen: $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@

clean:
	rm -f *.o *~ $(TARGET)
