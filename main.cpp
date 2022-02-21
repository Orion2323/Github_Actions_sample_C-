#include <iostream>
#include <fstream>

using namespace std;

int main(int argc,char** argv) {
    ifstream inFS(argv[1]);

    if (inFS.is_open()) {
        cout << "Reading input file..." << endl;
        string str;
        getline(inFS,str,'\n');

        cout << "Writing to output file..." << endl;
        ofstream inOF("../data/output.txt");
        inOF << "This is another string" << endl;
    } else {
        cout << "File not open!" << endl;
    }
    return 0;
}