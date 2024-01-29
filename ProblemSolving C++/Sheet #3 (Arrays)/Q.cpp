#include <iostream>
 
using namespace std;
 
void receiveAnArray(int n, int array[]) {
    for (int i = 0; i < n; i++)
        cin >> array[i];
 
}
 
int getNumberOfSubCases(int n, const int array[]) {
    int count = 0;
 
    for (int i = 0; i < n; i++) {
        count++;
        for (int j = i ; j < n-1; j++) {
            if (array[j] <= array[j+1])
                count++;
            else
                break;
        }
    }
 
    return count;
} 
 
 
int main() {
    int testCases;
    cin >> testCases;
 
    for (int i = 0; i < testCases; i++) {
        int n;
        cin >> n;
        int array[n];
        receiveAnArray(n, array);
 
        int count = getNumberOfSubCases(n, array);
        cout << count << endl;
    }
 
    return 0;
}