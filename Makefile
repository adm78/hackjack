SRC = ./source
OBJS = $(SRC)/hackjack.o $(SRC)/Player.o $(SRC)/Hand.o $(SRC)/Card.o
INC =./include
CC = g++
DEBUG = -g
CXXFLAGS += -Wall -I./include
LFLAGS =-Wall $(DEBUG)

hackjack : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o hackjack
	
Player.o : $(INC)/Player.h $(SRC)/Player.cpp $(INC)/Hand.h $(INC)/Card.h
	$(CC) $(CXXFLAGS) $(SRC)/Player.cpp
	
Hand.o : $(INC)/Hand.h $(SRC)/Hand.cpp $(INC)/Card.h
	$(CC) $(CXXFLAGS) $(SRC)/Hand.cpp
	
Card.o : $(INC)/Card.h $(SRC)/Card.cpp
	$(CC) $(CXXFLAGS) $(SRC)/Card.cpp
	
clean:
	$(RM) $(SRC)/*.o $(SRC)/*~ $(INC)/*~ hackjack
