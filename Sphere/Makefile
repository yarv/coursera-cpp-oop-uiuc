# First ever makefile!! Let's see how this goes lol
# ****************************************************
# Variables:
CC = g++
CFLAGS = -Wall -g
MAIN = main
DEPENDENCY = Sphere

# ***********************************
$(MAIN): $(MAIN).o $(DEPENDENCY).o
	$(CC) $(CFLAGS) -o $(MAIN) $(MAIN).o $(DEPENDENCY).o
# **********************************
$(MAIN).o: $(MAIN).cpp $(DEPENDENCY).h
	$(CC) $(CFLAGS) -c $(MAIN).cpp

$(DEPENDENCY).o: $(DEPENDENCY).h

clean:
	rm $(MAIN) *.o