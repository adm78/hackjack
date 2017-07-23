OBJS = hackjack.o Player.o Hand.o Card.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -I/home/andrew/projects/cpp/hackjack/include -c $(DEBUG)
LFLAGS = -Wall $(DEBUG) 

hackjack : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o ../hackjack
	
Player.o : Player.cpp  Player.h Hand.h Card.h
	$(CC) $(CFLAGS) Player.cpp
	
Hand.o : ../include/Hand.h Hand.cpp ../include/Card.h
	$(CC) $(CFLAGS) Hand.cpp
	
Card.o : ../include/Card.h Card.cpp
	$(CC) $(CFLAGS) Card.cpp
	
clean:
	\rm *.o *~ ../hackjack
