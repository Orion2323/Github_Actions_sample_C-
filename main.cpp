#include <iostream>
#include <fstream>

using namespace std;

int main(int argc,char** argv) {
    ifstream inFS(argv[1]);

    // check if input file is open
    if (inFS.is_open()) {
        cout << "Reading input file..." << endl;
        string str;
        getline(inFS,str,'\n');

        cout << "Writing to output file..." << endl;
        ofstream inOF(argv[2]);

        // check if output file is open
        if (inOF.is_open()) {
            inOF << "This is another string" << endl;
        } else {
            cout << "Output file not created!" << endl;
        }

    } else {
        cout << "File not open!" << endl;
    }
    return 0;
}