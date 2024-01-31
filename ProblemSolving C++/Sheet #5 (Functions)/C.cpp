#include <iostream>

using namespace std;

string getBinary(int n) {
    string binary;

    while (n > 0) {
        binary += to_string(n % 2);
        n /= 2;
    }

    return binary;
}

bool isPalindrome(int n) {
    string s = getBinary(n);
    int size = s.size();

    for (int i = 0; i < size; i++)
        if (s.at(i) != s.at(size - 1 - i))
            return false;

    return true;
}

bool isWonderful(int n) {
    if (n % 2 == 0 || !isPalindrome(n))
        return false;

    return true;
}

int main() {
    int n;
    cin >> n;

    if (isWonderful(n))
        cout << "YES";
    else
        cout << "NO";


}

