#include <iostream>

using namespace std;

int main(){
    int k,s;
    cin>>k>>s;

    int count=0;

    for(int x=0 ; x <= k && x <= s ; x++){
        for(int y=0 ; y<=k && y <= s ; y++){
            int z=s-(x+y);
            if(z>=0&&z<=k)
                count++;
        }
    }

    cout<<count;
}