#include <iostream>
#include <iomanip>

using namespace std;

void receiveAnArray(int size, double array[]) {
    for (int i = 0; i < size; i++)
        cin >> array[i];
}

double getAverage(int size, double array[]) {
    double sum = 0;
    for (int i = 0; i < size; i++)
        sum += array[i];

    return sum / size;
}

int main() {
    cout << fixed << setprecision(6);
    int size;
    cin >> size;

    double array[size];
    receiveAnArray(size, array);

    double average = getAverage(size, array);
    cout << average;

    return 0;
}
