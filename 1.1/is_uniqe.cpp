#include <iostream>
#include <vector>
using namespace std;


bool is_unique(char *entry) {
    vector <bool> all_chars(256);
    int i;

    for(i = 0; entry[i] != '\0'; i++) {
        if (all_chars[entry[i]] == true) {
            return false;
        } else {
            all_chars[entry[i]] = true;
        }
    }
    return true;
}


int main(int argc, char **argv) {
    if(is_unique(argv[1])) {
        cout << "It is" << endl;
    } else {
        cout << "It is not" << endl;
    }
    return (0);
}
