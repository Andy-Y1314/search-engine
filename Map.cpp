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

int Mymap::insert(char* line, int i) {
    char* token = strtok(line, " \t");

    if (token == NULL)
        return -1;

    int curr = atoi(token);

    if (curr != i)
        return -1;

    token = strtok(NULL, "\n");

    if (token == NULL)
        return -1;

    while (*token == ' ' || *token == '\t')
        token++;

    int end = strlen(token) - 1;

    while (end >= 0 && token[end] == ' ') {
        token[end] = '\0';
        end--;
    }

    if (end < 0)
        return -1;

    strcpy(documents[i], token);

    return 1;
}

