#include "search_engine.h"

using namespace std;
int main(int argc, char* argv[]) {
    if (argc !=5 || strcmp(argv[1], "-d") || strcmp(argv[3], "-k")) {
        cout << "Wrong Arguments!" << endl;
        return -1; 
    } else {
        cout << "Correct Arguments" << endl;
    }
    return 0;
}