#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int size;
    cin>>size;

    int array[size];
    long long total=0;

    for(int i=0;i<size;i++){
        cin>>array[i];
        total+=array[i];
    }

    cout<<abs(total);

}