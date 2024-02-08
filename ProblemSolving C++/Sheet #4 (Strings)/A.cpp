#include <iostream>
#include <string>

using namespace std;


int main() {
    string s1, s2;
    cin >> s1 >> s2;

    string newS = s1 + " " + s2;

    cout << s1.length() << " " << s2.length() << endl;
    cout << newS;

    return 0;
}