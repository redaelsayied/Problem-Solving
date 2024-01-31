#include <iostream>

using namespace std;

int getSum(int x, int y) {
    return x + y;
}

int main() {
    int x, y;

    cin >> x >> y;
    cout << getSum(x, y);
}

