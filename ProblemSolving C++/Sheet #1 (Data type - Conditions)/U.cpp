#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    double  n;
    cin>>n;
 
    int temp=(int)n;
    if(temp==n)
        cout<<"int "<<temp;
    else
        cout<<"float "<<temp<<" "<<(n-temp);
}