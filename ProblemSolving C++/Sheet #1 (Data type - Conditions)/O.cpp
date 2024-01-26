#include <iostream>
#include <cmath>
 
using namespace std;
 
int main(){
   int num1;
   int num2;
   char operation;
 
   int result;
 
   cin>>num1>>operation>>num2;
 
    switch (operation) {
        case '+':result=num1+num2;
            break;
        case '-':result=num1-num2;
            break;
        case '*':result=num1*num2;
            break;
        case '/':result=num1/num2;
            break;
    }
 
    cout<<result;
 
}