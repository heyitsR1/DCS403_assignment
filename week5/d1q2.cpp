#include <iostream> 
using namespace std; 

int factN(int n) { 
    if (n ==1 ) { 
        return 1;
    }
    return n*factN(n-1);
}

int main () { 
    int n; 
    cout <<  "Enter n: ";
    cin >> n; 
    cout << "Factorial is " << factN(n) <<endl;
}