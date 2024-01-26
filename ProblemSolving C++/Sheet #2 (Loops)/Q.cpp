#include <iostream>

using namespace std;

int getLastDigit(int n);

int main(){
   int times;
   cin>>times;

   for(int i=0;i<times;i++){
       int n;
       cin>>n;

       if(n==0)
           cout<<0;
       else
           while (n>0){
               cout<<getLastDigit(n)<<" ";
               n/=10;
           }

       cout<<endl;
   }

}

int getLastDigit(int n){
    return n%10;
}


