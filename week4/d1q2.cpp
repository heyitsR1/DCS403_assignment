#include <iostream> 
using namespace std; 

int main () { 
    int x[5];
    for (int i=0; i< 5; i ++) { 
        cout << "Enter N: "; 
        cin >> x[i]; 
    }
    int max=0;
    for (int i=0; i< 5; i ++) { 
        if ( x [i] > max) { 
            max = x[i];
        }
    }
    cout<< "Max is " << max <<endl;
    }


    