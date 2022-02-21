#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inFS("../input.txt");

    if (inFS.good()) {
        string str;
        getline(inFS,str,'\n');

        ofstream inOF("../output.txt");
        inOF << "This is another string" << endl;
    } else {
        cout << "File not open!" << endl;
    }
    return 0;
}