#include <iostream>
#include <cmath>

using namespace std;

void receiveAnArray(int size, int array[]) {
    for (int i = 0; i < size; i++)
        cin >> array[i];
}

int getMax(int size, const int array[]) {
    int max = array[0];

    for (int i = 1; i < size; i++)
        if (array[i] > max)
            max = array[i];

    return max;
}

int getMin(int size, const int array[]) {
    int min = array[0];

    for (int i = 1; i < size; i++)
        if (array[i] < min)
            min = array[i];

    return min;
}

int main() {
    int size;
    cin >> size;

    int array[size];
    receiveAnArray(size, array);

    int max = getMax(size, array);
    int min = getMin(size, array);

    cout << min << " " << max;


}

