#include <iostream>
#include <cmath>
 
using namespace std;
 
int main(){
   char  c;
   cin>>c;
 
   
   if(c>='A'&&c<='Z'){
       cout<<(char)(c+('a'-'A'));
   }
   else{
       cout<<(char)(c-('a'-'A'));
   }
 
}