#include <iostream>
#include <string>

using namespace std;

void fun() {
    string s1, s2;
    cin >> s1 >> s2;

    int min = s1.length() < s2.length() ? s1.length() : s2.length();

    int i;
    for (i = 0; i < min; i++)
        cout << s1[i] << s2[i];

    while (i < s1.size())
        cout << s1[i++];

    while (i < s2.size())
        cout << s2[i++];

    cout << endl;
}

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; ++i)
        fun();


    return 0;
}