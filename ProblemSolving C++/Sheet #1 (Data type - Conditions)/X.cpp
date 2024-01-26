#include <iostream>
#include <cmath>
 
using namespace std;
 
int main(){
   double l1,r1;
   double l2,r2;
 
   cin>>l1>>r1;
   cin>>l2>>r2;
 
   int s=max(l1,l2);
   int e=min(r1,r2);
 
   if(s>e)
       cout<<-1;
   else
       cout<<s<<" "<<e;
 
 
}