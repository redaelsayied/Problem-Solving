#include <iostream>

using namespace std;
void printSymbol(int counts);

int main(){
    short n;
    cin>>n;
    for(int i=n;i>0;i--){
        printSymbol(i);
    }
}

void printSymbol(int counts){
    for(int i=0; i < counts; i++)
        cout<<"*";

    cout<<endl;
}

