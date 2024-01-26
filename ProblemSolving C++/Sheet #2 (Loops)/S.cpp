#include <iostream>
#include <cmath>

using namespace std;

int sumOfOdds(int a, int b);

int main(){
    int times;
    cin>>times;

    for(int i=0;i<times;i++){
        int a,b;
        cin>>a>>b;

        cout<<sumOfOdds(min(a, b), max(a, b))<<endl;

    }

}
int sumOfOdds(int a, int b){
    int result=0;

    for(int i=a+1;i<b;i++){
        if(i%2!=0)
            result+=i;
    }

    return result;
}
