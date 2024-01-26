#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    int a, b, c,min,max,mid,temp;
 
    cin >> a >> b >> c;
 
    if(a>b){
        max=a;
        min=b;
    }else{
        max=b;
        min=a;
    }
    if(c>max)
    {
        temp=max;
        max=c;
    }
    else{
        temp=c;
    }
    if(temp<min){
        mid=min;
        min=temp;
    }else{
        mid=temp;
    }
    cout << min << endl;
    cout << mid << endl;
    cout << max << endl;
 
    cout << endl;
 
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}