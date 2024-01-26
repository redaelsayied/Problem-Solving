#include <iostream>
 
using namespace std;
int findLastDigit(long long num);
 
int main(){
    long long num1;
    long long num2;
 
    cin>>num1>>num2;
 
    int result= findLastDigit(num1)+ findLastDigit(num2);
 
    cout<<result;
 
 
}
 
int findLastDigit(long long num){
    return num%10;
}