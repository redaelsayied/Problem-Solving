#include <iostream>
#include <string>

using namespace std;


int main() {
    string s;
    getline(cin, s);

    int i = 0;
    while (s.at(i) != '\\') {
        cout << s.at(i++);
    }

    return 0;
}