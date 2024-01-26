#include <iostream>

using namespace std;

void printSymbol(char symbol,int counts);
int main(){
    char symbol;
    int times;
    cin>>symbol>>times;

    for(int i=0;i<times;i++){
        int count;
        cin>>count;
        printSymbol(symbol,count);
    }

}

void printSymbol(char symbol,int counts){
    for(int i=0; i < counts; i++)
        cout<<symbol;

    cout<<endl;
}

