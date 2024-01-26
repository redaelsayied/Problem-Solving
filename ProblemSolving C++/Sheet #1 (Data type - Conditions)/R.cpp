#include <iostream>
#include <cmath>
 
using namespace std;
 
int main(){
   int totalDays;
   cin>>totalDays;
 
   int years,days,months;
 
   years=totalDays/365;
 
   totalDays%=365;
   months=totalDays/30;
 
   totalDays%=30;
   days=totalDays;
 
   cout<<years<<" years"<<endl;
   cout<<months<<" months"<<endl;
   cout<<days<<" days"<<endl;
 
 
}