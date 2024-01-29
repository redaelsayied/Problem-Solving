#include <iostream>

using namespace std;


int main() {
    int length;
    cin >> length;
    int array[length];

    for (int i = 0; i < length; i++)
        cin >> array[i];

    for (int i = length - 1; i >= 0; i--)
        cout << array[i] << " ";
}