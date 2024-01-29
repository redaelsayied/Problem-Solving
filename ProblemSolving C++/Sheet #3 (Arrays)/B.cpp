#include <iostream>

using namespace std;
void receiveAnArray(int array[],int size);
int searchInArray(int array[], int size, int element);

int main(){
    int size;
    cin>>size;
    int array[size];

    receiveAnArray(array,size);

    int item;
    cin>>item;

    cout<<searchInArray(array,size,item);

}

void receiveAnArray(int array[],int size){
    for(int i=0;i<size;i++)
        cin>>array[i];
}

int searchInArray(int array[], int size, int element){
    for(int i=0;i<size;i++){
        if(element==array[i])
            return i;
    }
    return -1;
}