#include <iostream> 
using namespace std; 

int sumN(int n) { 
    int sum;
    sum = (n%10);
    if (n ==0 ) { 
        return sum;
    }
    return sum+ sumN(n/10);
}

int main () { 
    int n; 
    cout <<  "Enter n: ";
    cin >> n; 
    cout << "Sum is " << sumN(n) <<endl;
}


