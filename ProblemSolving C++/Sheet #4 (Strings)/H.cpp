#include <iostream>
#include <string>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        string s;
        cin >> s;
        if (s.find("010") < s.length() || s.find("101") < s.length())
            cout << "Good" << endl;
        else
            cout << "Bad" << endl;
    }


    return 0;
}