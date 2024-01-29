#include <iostream>
#include <cmath>

using namespace std;

bool isEvenArray(int array[], int size);
void divideArrayByTwo(int array[],int size);

int main(){
    int size;
    cin>>size;

    int array[size];
    int times=0;

    for(int i=0;i<size;i++){
        cin>>array[i];
    }

    while (isEvenArray(array,size)){
        times++;
        divideArrayByTwo(array,size);
    }

    cout<<times;

}

bool isEvenArray(int array[], int size){
    for(int i=0;i< size;i++)
        if(array[i] % 2 != 0)
            return false;

    return true;
}

void divideArrayByTwo(int array[],int size){
    for(int i=0;i<size;i++)
        array[i]=array[i]/2;
}