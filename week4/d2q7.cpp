#include <iostream>
using namespace std;
int main(){
    const int ROWS = 2;
    const int COLUMNS =  3 ;

    int num1 [ROWS][COLUMNS];
    int num2 [COLUMNS][ROWS];
    int num3 [ROWS][ROWS];

    cout << endl<<"Values for Matrix 1: " <<endl;
    for (int x=0; x< ROWS; x ++) { 
        for (int y=0; y<COLUMNS; y++) { 
            cout << "Enter element a [" << x+1  << "] ["<< y+1 <<"] "<< ": "; 
            cin >> num1[x][y]; 
        }
    }
    cout << endl<< "Values for Matrix 2: " <<endl;
    for (int x=0; x< COLUMNS; x ++) { 
        for (int y=0; y<ROWS; y++) { 
            cout << "Enter element a [" << x+1  << "] ["<< y+1 <<"] "<< ": "; 
            cin >> num2[x][y]; 
        }
    }

    for (int x=0; x< ROWS; x ++) { 
        for (int y=0; y<ROWS; y++) { 
            num3[x][y] = 0;
            for (int z=0; z < COLUMNS; z++ ) {
                num3 [x][y]+=  num1[x][z] * num2[z][y]; 
            }
        }
    }

    cout <<endl<< "Multiplication: " <<endl;
    for (int x=0; x< ROWS; x ++) { 
        for (int y=0; y<ROWS; y++) { 
            cout << num3 [x][y] << " ";
        }
        cout << endl;
    }
    cout <<endl;
    return 0;
}