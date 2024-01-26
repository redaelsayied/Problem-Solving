#include <iostream>

using namespace std;

int main(){
   const int  correctPassword=1999;

    while (true){
        int n;
        cin>>n;

        if(n==correctPassword){
            cout<<"Correct"<<endl;
            return 0;
        } else
            cout<<"Wrong"<<endl;
    }

}