OBJS = hackjack.o Player.o Hand.o Card.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

hackjack : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o ../hackjack
	
Player.o : Player.h Player.cpp Hand.h Card.h
	$(CC) $(CFLAGS) Player.cpp
	
Hand.o : Hand.h Hand.cpp Card.h
	$(CC) $(CFLAGS) Hand.cpp
	
Card.o : Card.h Card.cpp
	$(CC) $(CFLAGS) Card.cpp
	
clean:
	\rm *.o *~ ../hackjack
