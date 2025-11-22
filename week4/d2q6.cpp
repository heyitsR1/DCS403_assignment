#include <iostream>
using namespace std;
int main(){
    const int ROWS = 2;
    const int COLUMNS =  2 ;
    int num1 [ROWS][COLUMNS];
    int num2 [ROWS][COLUMNS];
    int num3 [ROWS][COLUMNS];
    cout << endl<<"Values for Matrix 1: " <<endl;
    for (int x=0; x< ROWS; x ++) { 
        for (int y=0; y<COLUMNS; y++) { 
            cout << "Enter element a [" << x+1  << "] ["<< y+1 <<"] "<< ": "; 
            cin >> num1[x][y]; 
        }
    }
    cout << endl<< "Values for Matrix 2: " <<endl;
    for (int x=0; x< ROWS; x ++) { 
        for (int y=0; y<COLUMNS; y++) { 
            cout << "Enter element a [" << x+1  << "] ["<< y+1 <<"] "<< ": "; 
            cin >> num2[x][y]; 
        }
    }
    for (int x=0; x< ROWS; x ++) { 
        for (int y=0; y<COLUMNS; y++) { 
            num3 [x][y]=num1[x][y] + num2[x][y]; 
        }
    }

    cout <<endl<< "Addition: " <<endl;
    for (int x=0; x< ROWS; x ++) { 
        for (int y=0; y<COLUMNS; y++) { 
            cout << num3 [x][y] << " ";
        }
        cout << endl;
    }
    cout <<endl;
    return 0;
}