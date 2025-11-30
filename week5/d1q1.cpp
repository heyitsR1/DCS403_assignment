#include <iostream> 
using namespace std; 

int printN(int n) { 
    if (n ==0 ) { 
        return 0;
    }
    printN(n-1); 
    cout << n << " ";
    return -1;
}

int main () { 
    int n; 
    cout <<  "Enter n: ";
    cin >> n; 
    printN(n);

}