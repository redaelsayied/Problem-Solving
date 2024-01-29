#include <iostream>

using namespace std;

bool isValidNumber(char c) {
    return c >= '0' && c <= '9';
}

bool checkCode(int n1, int n2, string s) {
    if ((n1 + n2 + 1) != s.length() || s.at(n1) != '-')
        return false;


    for (int i = 0; i < n1; i++)
        if (!isValidNumber(s.at(i)))
            return false;

    for (int i = n1 + 1; i < s.length(); i++)
        if (!isValidNumber(s.at(i)))
            return false;

    return true;

}


int main() {
    int n1, n2;
    string s;

    cin >> n1 >> n2 >> s;

    int state = checkCode(n1, n2, s);

    if (state)
        cout << "Yes";
    else
        cout << "No";

}
