#include <iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    int n=1,gcd=1;

    while (n<=a&&n<=b){
        if(a%n==0&&b%n==0)
            gcd=n;
        n++;
    }

    cout<<gcd;
}
