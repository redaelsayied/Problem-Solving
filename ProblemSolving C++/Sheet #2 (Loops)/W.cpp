#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int symbols=1;
    for(int i=0;i<n;i++){
        for(int space=i;space<n-1;space++)
            cout<<" ";

        for(int symbol=0;symbol<symbols;symbol++)
            cout<<"*";

        cout<<endl;
        symbols+=2;
    }

    symbols-=2;
    for(int i=0;i<n;i++){
        for(int space=0;space<i;space++)
            cout<<" ";

        for(int symbol=0;symbol<symbols;symbol++)
            cout<<"*";

        cout<<endl;
        symbols-=2;
    }

}