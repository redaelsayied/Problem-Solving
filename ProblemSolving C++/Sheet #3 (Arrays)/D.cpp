#include <iostream>

using namespace std;
void receiveAnArray(int array[],int size);
void printPositions(int array[],int size);

int main(){

    int size;
    cin>>size;
    int array[size];

    receiveAnArray(array,size);
    printPositions(array,size);


}

void receiveAnArray(int array[],int size){
    for(int i=0;i<size;i++)
        cin>>array[i];
}

void printPositions(int array[],int size){
    for(int i=0;i<size;i++){
        if(array[i]<=10)
            printf("A[%d] = %d\n",i,array[i]);
    }
}