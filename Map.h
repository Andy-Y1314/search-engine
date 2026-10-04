#include <iostream>
#include <cstdlib>
#include <cstring>

#ifndef MAP_H
#define MAP_H

class Mymap {
private:
    int size;
    int buffer_size;
    char** documents;
    int* lengths;

public:
    Mymap(int size, int buffer_size);
    ~Mymap();
    int insert(char* line, int i);
    const int get_size() {return size;}
    const int get_buffer_size() {return buffer_size;}
};

#endif