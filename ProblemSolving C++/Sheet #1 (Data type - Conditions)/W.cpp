#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    int a,b,result;
    char op,eq;
    cin>>a>>op>>b>>eq>>result;
    int correct;
 
    switch (op) {
        case '+':correct=a+b;
            break;
        case '-':correct=a-b;
            break;
        default:correct=a*b;
 
    }
    if(correct==result)
        cout<<"Yes";
    else
        cout<<correct;
}