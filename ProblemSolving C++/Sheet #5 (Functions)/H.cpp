#include <iostream>

using namespace std;

void print(int n, char c) {
    for (int i = 0; i < n - 1; i++)
        cout << c << " ";

    cout << c << endl;
}

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        int n;
        char c;
        cin >> n >> c;
        print(n, c);
    }

    return 0;
}
