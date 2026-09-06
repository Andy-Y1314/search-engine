CC = g++

default: search_engine

search_engine: search_engine.o
	$(CC) search_engine.o -o search_engine

search_engine.o: search_engine.cpp search_engine.h
	$(CC) search_engine.cpp -c

clean:
	rm -f *.o