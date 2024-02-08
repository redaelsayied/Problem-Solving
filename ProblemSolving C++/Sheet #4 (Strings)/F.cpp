#include <iostream>
#include <string>

using namespace std;

void fun() {
    string s;
    cin >> s;
    int size = s.length();

    if (size <= 10)
        cout << s << "\n";
    else
        cout << s.at(0) << size - 2 << s.at(size - 1) << '\n';
}

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
        fun();

    return 0;
}