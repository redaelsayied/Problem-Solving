#include <iostream>
#include <cmath>
 
using namespace std;
 
long long getResult(int x, int n) {
    int result = 0;
    for (int i = 2; i <= n; i += 2)
        result += pow(x, i);
 
    return result;
}
 
int main() {
    int n, x;
    cin >> x >> n;
    cout << getResult(x, n);
 
}
 