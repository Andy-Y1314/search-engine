#include <iostream>
#include <fstream>
#include "Map.h"

int read_sizes(int& line_counter, int& maxLength, const std::string& doc_file);
int read_input(Mymap* my_map, char* docfile);