#include <iostream>
using namespace std;

const int ROWS = 2;
const int COLUMNS =  3 ;
void printMatrix (int arr[][COLUMNS], int size = ROWS) {
    cout <<endl<< "Matrix: " <<endl;
    for (int x=0; x< ROWS; x ++) { 
        for (int y=0; y<COLUMNS; y++) { 
            cout << arr [x][y] << " ";
        }
        cout << endl;
    }

}
int main(){

    int num1 [ROWS][COLUMNS];
    int num2 [COLUMNS][ROWS];
    int num3 [ROWS][ROWS];

    cout << endl<<"Values for Matrix : " <<endl;
    for (int x=0; x< ROWS; x ++) { 
        for (int y=0; y<COLUMNS; y++) { 
            cout << "Enter element a [" << x+1  << "] ["<< y+1 <<"] "<< ": "; 
            cin >> num1[x][y]; 
        }
    }
    printMatrix (num1,ROWS);

    return 0;
}