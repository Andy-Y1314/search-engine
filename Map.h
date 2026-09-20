#include <iostream>

class Mymap {
private:
    int size;
    int buffer_size;
    char** documents;
    int* lengths;

public:
    Mymap(int size, int buffer_size);
    ~Mymap();
};
