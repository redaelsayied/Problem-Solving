#include <iostream>
#include <cmath>
 
using namespace std;
int findMin(int a,int b,int c);
int findMax(int a,int b,int c);
int main(){
    int a,b,c;
    cin>>a>>b>>c;
 
    int min= findMin(a,b,c);
    int max= findMax(a,b,c);
 
    cout<<min<<" "<<max;
 
}
int findMin(int a,int b,int c){
    int minimum=min(a,b);
    minimum=min(minimum,c);
    return minimum;
}
int findMax(int a,int b,int c){
    int maximum=max(a,b);
    maximum=max(maximum,c);
    return maximum;
}