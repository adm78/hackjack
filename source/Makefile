OBJS = hackjack.o Hand.o Card.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

hackjack : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o ../hackjack
	
Hand.o : Hand.h Hand.cpp Card.h
	$(CC) $(CFLAGS) Hand.cpp
	
Card.o : Card.h Card.cpp
	$(CC) $(CFLAGS) Card.cpp
	
clean:
	\rm *.o *~ ../hackjack
