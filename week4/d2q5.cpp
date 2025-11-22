#include <iostream>
using namespace std;
int main(){
    const int ROWS = 3;
    const int COLUMNS =  3 ;
    int num [ROWS][COLUMNS];
    int transpose [COLUMNS][ROWS];
    for (int x=0; x< ROWS; x ++) { 
        for (int y=0; y<COLUMNS; y++) { 
            cout << "Enter element a [" << x+1  << "] ["<< y+1 <<"] "<< ": "; 
            cin >> num[x][y]; 
        }
    }
    for (int x=0; x< ROWS; x ++) { 
        for (int y=0; y<COLUMNS; y++) { 
            transpose [x][y]=num[y][x]; 
        }
    }

    cout <<"Transpose: " <<endl;
    for (int x=0; x< ROWS; x ++) { 
        for (int y=0; y<COLUMNS; y++) { 
            cout << transpose [x][y] << " ";
        }
        cout << endl;
    }
    cout <<endl;
    return 0;
}