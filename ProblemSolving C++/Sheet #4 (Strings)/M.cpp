#include <iostream>
#include <string>

using namespace std;

bool containsHello(string s) {
    string target = "hello";

    int i = 0, j = 0;
    while (i < s.length() && j < target.length()) {
        if (s.at(i) == target.at(j)) {
            i++;
            j++;
        } else
            i++;
    }

    return target.length() == j;
}

int main() {
    string s;
    cin >> s;

    if (containsHello(s))
        cout << "YES";
    else
        cout << "NO";


    return 0;
}