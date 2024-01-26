#include <iostream>

using namespace std;
long long calculateFactorial(long long n) ;
int main(){
    int times;
    cin>>times;

    for(int i=0;i<times;i++){
        int number;
        cin>>number;

        cout<< calculateFactorial(number)<<endl;
    }
}

long long calculateFactorial(long long n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * calculateFactorial(n - 1);
    }
}
