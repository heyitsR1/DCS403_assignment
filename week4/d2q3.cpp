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
    int sum_rows [ROWS] ;
    int column_rows [COLUMNS];
    int sum = 0;
    for (int x=0; x< ROWS; x ++) { 
        for (int y=0; y<COLUMNS; y++) { 
            sum +=num[x][y];
        }
        sum_rows [x] = sum;
        sum = 0;
    }

    for (int y=0; y< COLUMNS; y ++) { 
        for (int x=0; x< ROWS; x ++) { 
            sum +=num[x][y];
        }
        column_rows [y] = sum;
        sum = 0;
    
    }   
    cout <<"Row Sum is : ";
    for (int i=0; i < ROWS; i++){
        cout << sum_rows[i];
        if (i < ROWS-1) { 
            cout << ", ";
        }
    }
    cout << endl<< "Column sum is: ";
    for (int i=0; i < COLUMNS; i++){
        cout << column_rows[i];
        if (i < ROWS-1) { 
            cout << ", ";
        }
    }
    
    cout <<endl;
    return 0;
}