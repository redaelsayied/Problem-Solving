#include <iostream>
#include <cmath>

using namespace std;
int getNumberOfOnes(int n);
int getDecimal(int ones);
int main(){
   int times;
   cin>>times;

   for(int i=0;i<times;i++){
       int num;
       cin>>num;

       int ones= getNumberOfOnes(num);
       cout<<getDecimal(ones)<<endl;
   }

}
int getNumberOfOnes(int n){
    int numberOfOnes=0;
    while (n!=0){
        int temp=n%2;
        if(temp==1)
            numberOfOnes++;
        n/=2;
    }

    return numberOfOnes;
}

int getDecimal(int ones){
    int result=0;
   for(int i=0;i<ones;i++)
       result+=pow(2.0,i);

    return result;
}