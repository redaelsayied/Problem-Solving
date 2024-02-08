#include <iostream>
#include <string>

using namespace std;


int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    string newString = s1 + s2;

    swap(s1.at(0), s2.at(0));

    cout << s1.length() << " " << s2.length() << endl;
    cout << newString << endl;
    cout << s1 << " " << s2;

    return 0;
}