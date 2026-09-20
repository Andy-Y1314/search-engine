CC = g++

default: search_engine

search_engine: search_engine.o read_input.o Map.o
	$(CC) search_engine.o read_input.o Map.o -o search_engine

Map.o: Map.cpp Map.h
	$(CC) -c Map.cpp

read_input.o: read_input.cpp read_input.h
	$(CC) -c read_input.cpp

search_engine.o: search_engine.cpp search_engine.h
	$(CC) -c search_engine.cpp

clean:
	rm -f *.o search_engine