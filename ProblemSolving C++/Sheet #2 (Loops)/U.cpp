#include <iostream>
#include <cmath>

using namespace std;
int sumOfDigits(int n);

int main(){
    int n;
    int a,b;
    cin>>n;
    cin>>a>>b;

    int result=0;
    
    for(int i=1;i<=n;i++){
        int sum= sumOfDigits(i);

        if(sum>=a&&sum<=b)
            result +=i;
    }

    cout<<result;

}

int sumOfDigits(int n){
    int result=0;
    while (n>0){
        result+=n%10;
        n/=10;
    }

    return result;
}
