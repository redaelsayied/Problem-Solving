#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin>>n;

    int symbols=1;

    for(int i=1;i<=n;i++){
        for(int space=1;space<=n-i;space++)
            cout<<" ";

        for(int symbol=1;symbol<=symbols;symbol++)
            cout<<"*";

        cout<<endl;
        symbols+=2;
    }
}
