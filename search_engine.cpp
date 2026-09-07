#include "search_engine.h"

using namespace std;
int main(int argc, char* argv[]) {
    if (argc !=5 || strcmp(argv[1], "-d") || strcmp(argv[3], "-k")) {
        cout << "Wrong Arguments!" << endl;
        return -1; 
    } 

    int line_counter = 0;
    int max_length = -1;
    int k = atoi(argv[4]);

    ifstream file(argv[2]);

    if (!file) {
        cout << "Error opening file" << endl;
        return -1;
    }
    
    return 0;
}