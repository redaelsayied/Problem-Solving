#include <iostream>
#include <cmath>
#include<iomanip>
 
using namespace std;
 
int main(){
    const double PI=3.141592653;
 
    double radius;
    cin>>radius;
 
    cout << fixed << setprecision(9);
    double area=PI*pow(radius,2);
 
    cout<<area;
 
 
}