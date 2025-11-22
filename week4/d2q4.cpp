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

    int largest = 0;
    cout <<"Row Max Values : ";
    for (int x=0; x< ROWS; x ++) { 
        int largest = num[x][0];
        for (int y=0; y<COLUMNS; y++) { 
            if (num[x][y] > largest) { 
                largest = num[x][y];
            }
        }
        cout << largest;
        if (x < ROWS-1) { 
            cout << ", ";
        }
    }
    cout << endl;
    return 0;
}