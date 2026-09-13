#include "search_engine.h"

int main(int argc, char* argv[]) {
    if (argc != 5 || std::string(argv[1]) != "-d" || std::string(argv[3]) != "-k") {
        std::cout << "Wrong Arguments!" << std::endl;
        return -1; 
    } 

    std::cout << "Please Wait" << std::endl;

    int line_counter = 0;
    int max_length = -1;
    int k = atoi(argv[4]);

    std::string doc_file = argv[2];

    if (read_sizes(line_counter, max_length, doc_file) == - 1) {
        return -1;
    }

    std::cout << "Initialisation Finished" << std::endl;
    
    return 0;
}