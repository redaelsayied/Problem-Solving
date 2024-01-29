#include <iostream>

using namespace std;



int main() {
    int rows;
    int cols;
    int element;

    cin >> rows;
    cin >> cols;

    int matrix[rows][cols];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix[i][j];

    cin>>element;
    bool state= true;


    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if(matrix[i][j]==element){
                state= false;
                goto existOuterLoop;
            }

    existOuterLoop:

    if(state)
        cout<< "will take number";
    else
        cout<< "will not take number";

}