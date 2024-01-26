#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int even,odd,positive,negative;
    even=odd=positive=negative=0;

    for(int i=0;i<n;i++){
        int number;
        cin>>number;

        if(number%2==0)
            even++;
        else
            odd++;

        if(number>0)
            positive++;
        else if(number<0)
            negative++;

    }

    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<positive<<endl;
    cout<<"Negative: "<<negative<<endl;
}