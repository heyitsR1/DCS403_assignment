#include <iostream> 
using namespace std; 

int powRecur(int base,int power) { 
    if (power == 0 ) { 
        return 1;
    }
    return base* powRecur(base,power-1);
}

int main () { 
    int n,x; 
    cout <<  "Enter (a) and (b) such that a ^b : ";
    cin >> n>>x; 
    cout << powRecur(n,x) <<endl;
}


