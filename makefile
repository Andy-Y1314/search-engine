CC = g++

default: search_engine

search_engine: search_engine.o read_input.o
	$(CC) search_engine.o read_input.o -o search_engine

read_input.o: read_input.cpp read_input.h
	$(CC) read_input.cpp -c

search_engine.o: search_engine.cpp search_engine.h
	$(CC) search_engine.cpp -c

clean:
	rm -f *.o search_engine