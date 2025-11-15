#include <iostream> 
using namespace std; 

int main () { 
    int x;
    cout << "Enter N: "; 
    cin >> x; 
    for (int i = x; i >=1; i--) {
        for (int k = 0; k <x-i;k++ ){
                cout << " ";
            }
        for (int j = 1; j <=2*i-1; j++) {
                cout << "*";
    }
    cout<<endl;
    }
}
