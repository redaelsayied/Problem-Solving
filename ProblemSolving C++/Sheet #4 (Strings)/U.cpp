#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isUpperCase(char c) {
    return c >= 'A' && c <= 'Z';
}

void makeLower(char &c) {
    c = c + ('a' - 'A');
}

int main() {
    string s;
    cin >> s;

    for (char &c: s)
        if (isUpperCase(c))
            makeLower(c);

    int freq[26] = {0};

    for (char c: s)
        freq[c - 'a']++;


    int minimum = min(freq['e' - 'a'], freq['g' - 'a']);
    minimum = min(minimum, freq['y' - 'a']);
    minimum = min(minimum, freq['p' - 'a']);
    minimum = min(minimum, freq['t' - 'a']);

    cout << minimum;

    return 0;
}