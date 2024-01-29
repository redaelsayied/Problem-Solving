#include <iostream>
#include <cmath>

using namespace std;

void receiveAnArray(int size, int array[]) {
    for (int i = 0; i < size; i++)
        cin >> array[i];
}


bool isSubSequence(int size1, int array1[], int size2, int array2[]) {
    int index1 = 0;
    int index2 = 0;

    while (index1 < size1 && index2 < size2) {
        if (array1[index1] == array2[index2]) {
            index1++;
            index2++;
        } else
            index1++;
    }

    return index2 == size2;
}

int main() {
    int sizeOfFirstArray;
    int sizeOfSecondArray;

    cin >> sizeOfFirstArray;
    cin >> sizeOfSecondArray;

    int arrayA[sizeOfFirstArray];
    int arrayB[sizeOfSecondArray];

    receiveAnArray(sizeOfFirstArray, arrayA);
    receiveAnArray(sizeOfSecondArray, arrayB);

    bool state = isSubSequence(sizeOfFirstArray, arrayA, sizeOfSecondArray, arrayB);


    if (state)
        cout << "YES";
    else
        cout << "NO";


    return 0;
}

