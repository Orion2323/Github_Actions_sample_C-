#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inFS("../data/input.txt");

    if (inFS.is_open()) {
        string str;
        getline(inFS,str,'\n');

        ofstream inOF("../data/output.txt");
        inOF << "This is another string" << endl;
    } else {
        cout << "File not open!" << endl;
    }
    return 0;
}