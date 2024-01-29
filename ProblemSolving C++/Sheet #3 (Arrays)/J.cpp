#include <iostream>

using namespace std;

int *receiveAnArray(int n);

int numberOfOccurrence(int *array, int length);

bool isOdd(int n);

int main() {
    int n;
    cin >> n;
    int *array = receiveAnArray(n);
    int result = numberOfOccurrence(array, n);

    if (isOdd(result))
        cout << "Lucky";
    else
        cout << "Unlucky";


}

int *receiveAnArray(int n) {
    int *array = new int[n];

    for (int i = 0; i < n; i++)
        cin >> array[i];

    return array;
}

bool isOdd(int n) {
    return n % 2 != 0;
}

int findMinimum(int *array, int length) {
    int min = array[0];

    for (int i = 0; i < length; i++) {
        int temp = array[i];
        if (temp < min)
            min = temp;
    }
    return min;
}

int numberOfOccurrence(int *array, int length) {
    int minimumOdd = findMinimum(array, length);
    int occurrence = 0;

    for (int i = 0; i < length; i++)
        if (minimumOdd == array[i])
            occurrence++;

    return occurrence;
}


