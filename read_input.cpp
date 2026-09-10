#include "read_input.h"
using namespace std;

int read_sizes(int* line_counter, int* maxLength, char* doc_file) {
    ifstream file(doc_file);

    if (!file) {
        cout << "Error opening file" << endl;
        return -1;
    }
}