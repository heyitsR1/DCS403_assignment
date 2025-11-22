#include <iostream>
using namespace std;
int main(){
    const int ROWS = 3;
    const int COLUMNS =  3 ;
    int num [ROWS][COLUMNS];
    for (int x=0; x< ROWS; x ++) { 
        for (int y=0; y<COLUMNS; y++) { 
            cout << "Enter element a [" << x+1  << "] ["<< y+1 <<"] "<< ": "; 
            cin >> num[x][y]; 
        }
    }
    for (int x=0; x< ROWS; x ++) { 
        for (int y=0; y<COLUMNS; y++) { 
            cout << num[x][y] << " "; 
        }
        cout <<endl;
    }
    return 0;
}