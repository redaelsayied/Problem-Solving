#include <iostream>

using namespace std;

int main(){
   int times;
   cin>>times;

   int n1=-1;
   int n2=1;
   for(int i=0;i<times;i++){
       int n=n1+n2;
       n1=n2;
       n2=n;
       cout<<n<<" ";
   }
}