#include <iostream> 
using namespace std; 

int main () { 
    int x;
    cout << "Enter N: "; 
    cin >> x; 
    int i=1;
    do { 
        cout << x << "x" << i << " = " << x*i << endl;
        i++;
    } while (i<=10);

}