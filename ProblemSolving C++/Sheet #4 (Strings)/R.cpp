#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int score = 0;

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'V')
            score += 5;

        else if (s[i] == 'W')
            score += 2;

        else if (s[i] == 'X')
            i++; // to skip next char

        else if (s[i] == 'Y') {
            if (i < s.length() - 1) {
                s += s.at(i + 1); // put char at end
                i++; // to skip next char
            }

        } else if (s[i] == 'Z' && i < s.length() - 1) {
            if (s[i + 1] == 'V') {
                score /= 5;
                i++; // to skip next char
            } else if (s[i + 1] == 'W') {
                score /= 2;
                i++; // to skip next char

            }
        }
    }

    cout <<
         score;

    return 0;
}
