#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLUMNS =  3 ;
bool isSymmeticMatrix (int arr[][COLUMNS], int size = ROWS) {
    bool symmetric= true;
    for (int x=0; x< size; x ++) { 
        for (int y=0; y<COLUMNS; y++) { 
            if (arr[x][y]!=arr[y][x]) {
                symmetric = false;
            }
        }
    }
    return symmetric;
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
    if (isSymmeticMatrix(num1,ROWS)) {
        cout << "MATRIX IS SYMMETRIC" <<endl;
    } else { 
        cout << "MATRIX IS NON-SYMMETRIC" <<endl;
    }

    return 0;
}