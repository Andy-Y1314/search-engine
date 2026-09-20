#include "Map.h"

Mymap::Mymap(int size, int buffer_size)
    : size(size), buffer_size(buffer_size)
{
    documents = new char*[size];
    lengths = new int[size];

    for (int i = 0; i < size; i++) {
        documents[i] = new char[buffer_size];
        lengths[i] = 0;
    }
}

Mymap::~Mymap()
{
    for (int i = 0; i < size; i++) {
        delete[] documents[i];
    }
    delete[] documents;
    delete[] lengths;
}

