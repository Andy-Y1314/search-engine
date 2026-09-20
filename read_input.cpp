#include "read_input.h"

int read_sizes(int& line_counter, int& max_length, const std::string& doc_file) {
    std::ifstream file(doc_file);

    if (!file) {
        std::cout << "Error opening file" << std::endl;
        return -1;
    }

    std::string line;
    int current_length;

    while (getline(file, line)) {
        current_length = line.length();

        if (max_length < current_length) {
            max_length = current_length;
        }
        line_counter++;
    }

    if (line_counter == 0 || max_length < 3) {
        std::cout << "Document is too empty and does not meet requirements" << std::endl;
        return -1;
    }
    return 1;
}