#include <iostream>
 
using namespace std;
 
bool isLucky(string s);
 
int main(){
    int a,b;
    cin>>a>>b;
 
    bool isThereLucky= false;
 
    for(int i=a;i<=b;i++){
        if(isLucky(to_string(i))){
            cout<<i<<" ";
            isThereLucky= true;
        }
    }
 
    if(!isThereLucky)
        cout<<-1;
 
 
 
}
 
bool isLucky(string s){
    for(char c : s){
        int n=(int)(c-'0');
 
        if (n == 7 || n == 4)
            continue;
 
        return false;
 
    }
 
    return true;
}