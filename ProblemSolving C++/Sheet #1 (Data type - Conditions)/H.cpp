#include <iostream>
#include <cmath>
 
using namespace std;
 
int main(){
    float num1;
    float num2;
 
    cin>>num1>>num2;
 
    float result=num1/num2;
 
    cout<<"floor "<<num1<<" / "<<num2<<" = "<<floor(result)<<endl;
    cout<<"ceil "<<num1<<" / "<<num2<<" = "<<ceil(result)<<endl;
    cout<<"round "<<num1<<" / "<<num2<<" = "<<round(result)<<endl;
 
}