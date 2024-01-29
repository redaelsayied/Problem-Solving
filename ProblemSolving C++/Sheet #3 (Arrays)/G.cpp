#include <iostream>

using namespace std;

bool isPalindrome(int array[], int length);

int main() {
    int length;
    cin >> length;
    int array[length];

    for (int i = 0; i < length; i++)
        cin >> array[i];

    if (isPalindrome(array, length))
        cout << "YES";
    else
        cout << "NO";

}

bool isPalindrome(int array[], int length) {
    for (int i = 0; i < length / 2; i++)
        if (array[i] != array[length - 1 - i])
            return false;

    return true;
}