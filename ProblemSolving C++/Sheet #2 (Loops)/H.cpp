#include <iostream>
#include <cmath>

bool isPrime(int n);

using namespace std;

int main(){
    int n;
    cin>>n;

    if(isPrime(n))
        cout<<"YES";
    else
        cout<<"NO";

}

bool isPrime(int n){
    if(n==2)
        return true;

    for(int i=2;i<= sqrt(n);i++)
        if(n%i==0)
            return false;

    return true;
}
