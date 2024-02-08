#include <iostream>
#include <string>

using namespace std;


bool isUpperChar(char c) {
    return c >= 'A' && c <= 'Z';
}

bool isLowerChar(char c) {
    return c >= 'a' && c <= 'z';
}

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
        if (isUpperChar(s.at(i)))
            s.at(i) = s.at(i) + 32; //'a'-'A'=32
        else if (isLowerChar(s.at(i)))
            s.at(i) = s.at(i) - 32; //'a'-'A'=32
        else if (s.at(i) == ',')
            s.at(i) = ' ';

    cout << s;


    return 0;
}