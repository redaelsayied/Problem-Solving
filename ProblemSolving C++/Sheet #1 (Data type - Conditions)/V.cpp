#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    int a,b;
    char op;
    cin>>a>>op>>b;
    bool state;
 
    switch (op) {
        case '>':state=a>b;
            break;
        case '<':state=a<b;
            break;
        default:state=a==b;
 
    }
    if(state)
        cout<<"Right";
    else
        cout<<"Wrong";
}