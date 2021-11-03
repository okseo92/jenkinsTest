	
CC = gcc
CFLAGS = -g -Wall
OBJS = test.o
TARGET = test.out
 
$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)
 
main.o: 
	test.c

clean:
	rm -f *.o
	 rm -f $(TARGET)
