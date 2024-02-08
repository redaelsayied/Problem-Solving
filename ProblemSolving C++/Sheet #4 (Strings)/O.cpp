#include <iostream>
#include <string>

using namespace std;

int main() {
    int size;
    cin >> size;

    int freq[26] = {0};

    for (int i = 0; i < size; i++) {
        char temp;
        cin >> temp;
        freq[temp - 97]++;
    }

    for (int i = 0; i < 26; i++)
        while (freq[i]) {
            cout << (char) (i + 97);
            freq[i]--;
        }

    return 0;
}