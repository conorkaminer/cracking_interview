#include <iostream>
#include <vector>

using namespace std;

bool isPermutation(string a, string b) {
    if (a.length() != b.length()) {
        return false;
    } else {
        
    }
}

int main (int argc, char **argv) {
    vector<string> args;

    if (argc > 1) {
        args.assign(argv + 1, argv + argc);
    }

    if (isPermutation(args[0], args[1]) {
        cout << "Is Permutation" ;
    } else {
        cout << "Not a Permutation" ;
    }
}
