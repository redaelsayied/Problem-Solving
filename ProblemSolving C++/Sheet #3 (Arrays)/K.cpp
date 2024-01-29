#include <iostream>

using namespace std;

int toInt(char c) {
    return (c - '0');
}

int sumOfDigit(string s) {
    int sum = 0;

    for (char c: s) {
        int value = toInt(c);
        sum += value;
    }

    return sum;

}

int main() {
    int n;

    string userInput;
    cin >> n;
    cin >> userInput;

    cout << sumOfDigit(userInput);

}