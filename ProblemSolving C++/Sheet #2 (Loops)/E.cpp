#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int max=INT_MIN;

    for(int i=0;i<n;i++){
        int number;
        cin>>number;

        if(number>max)
            max=number;
    }

    cout<<max;

}