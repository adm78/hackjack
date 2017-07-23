OBJS = hackjack.o Player.o Hand.o Card.o
INC =../include
CC = g++
DEBUG = -g
CXXFLAGS += -Wall -I../include -c
LFLAGS =-Wall $(DEBUG)

hackjack : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) $(INCS) -o ../hackjack
	
Player.o : $(INC)/Player.h Player.cpp $(INC)/Hand.h $(INC)/Card.h
	$(CC) $(CXXFLAGS) Player.cpp
	
Hand.o : $(INC)/Hand.h Hand.cpp $(INC)/Card.h
	$(CC) $(CXXFLAGS) Hand.cpp
	
Card.o : $(INC)/Card.h Card.cpp
	$(CC) $(CXXFLAGS) Card.cpp
	
clean:
	\rm *.o *~ ../hackjack
