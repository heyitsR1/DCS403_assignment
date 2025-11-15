#include <iostream> 
using namespace std; 

int fact (int n) { 
    int fact = 1;
    for (int i=1; i<=n; i++) {
        fact *=i;
    }
    // cout <<fact<<endl;
    return fact;
}

int main () { 
    int x;
    cout << "Enter N: "; 
    cin >> x; 
    for (int i = 0; i<x; i++) {
        
        for (int k =1; k <=x-i; k++) {
            cout << " ";
        }
        for (int j =0; j <=i; j++) {
            int d = fact(i)/ (fact(j) * fact(i-j));
            cout << d << " ";
        }
 
    cout<<endl;
    }
}
