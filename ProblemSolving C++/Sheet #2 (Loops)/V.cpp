#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<4;j++){
            if(count%4==0)
                cout<<"PUM"<<endl;
            else
                cout<<count<<" ";

            count++;
        }


    }


}