#include <iostream>
#include <cmath>

using namespace std;

void printSum(int a,int b);

int main(){

    while (true){
        int a,b;
        cin>>a>>b;

        if(a<=0||b<=0)
            break;
        else
            printSum(min(a,b), max(a,b));

    }

}
void printSum(int a,int b){
    int result=0;

    for(int i=a;i<=b;i++){
        cout<<i<<" ";
        result+=i;
    }

    cout<<"sum ="<<result<<endl;
}
