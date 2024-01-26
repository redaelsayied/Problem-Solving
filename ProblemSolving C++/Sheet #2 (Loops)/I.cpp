#include <iostream>

using namespace std;
int findLastDigit(int n);

int main(){
    int userInput;
    cin >> userInput;

    int temp=userInput;

    int result=0;

    while (temp > 0){
        result=result*10+ findLastDigit(temp);
        temp/=10;
    }

    cout<<result<<endl;

    if(userInput == result)
        cout<<"YES";
    else
        cout<<"NO";

}

int findLastDigit(int n){
    return n%10;
}
