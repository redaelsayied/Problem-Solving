#include <iostream>

using namespace std;
void receiveAnArray(int array[],int size);
void replaceElements(int array[],int size);
void printArray(int array[],int size);

int main(){

    int size;
    cin>>size;
    int array[size];

    receiveAnArray(array,size);
    replaceElements(array,size);
    printArray(array,size);

}

void receiveAnArray(int array[],int size){
    for(int i=0;i<size;i++)
        cin>>array[i];
}

void replaceElements(int array[],int size){
    for(int i=0;i<size;i++){
        if(array[i]>0)
            array[i]=1;
        else if(array[i]<0)
            array[i]=2;
    }
}

void printArray(int array[],int size){
    for(int i=0;i<size;i++)
        cout<<array[i]<<" ";
}