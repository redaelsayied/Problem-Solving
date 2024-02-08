#include <iostream>
#include <string>

using namespace std;


int main() {
    string s;
    cin >> s;

    int sum = 0;

    for (int i = 0; i < s.length(); i++) {
        int n = s.at(i) - '0';
        sum += n;
    }

    cout << sum;

    return 0;
}