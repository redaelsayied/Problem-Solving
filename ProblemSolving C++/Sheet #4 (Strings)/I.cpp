#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s) {
    int size = s.length();

    for (int i = 0; i < size; i++)
        if (s.at(i) != s.at(size - 1 - i))
            return false;

    return true;
}

int main() {
    string s;
    cin >> s;

    if (isPalindrome(s))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}