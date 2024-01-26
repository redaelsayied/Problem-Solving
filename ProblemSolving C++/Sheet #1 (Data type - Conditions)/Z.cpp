#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
 
    bool state=b *log(a) > d *log(c);
    if(state)
        cout<<"YES";
    else
        cout<<"NO";
}