#include <iostream> 
using namespace std; 

int main() { 
    int x;
    cout << "Enter N: "; 
    cin >> x; 
    int sum = 0;
    for (int i =1; i <= x;i++ ) { 
        sum +=i;
    }
    cout << "Sum: " << sum << endl;
}