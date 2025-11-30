#include <iostream> 
using namespace std; 

int fibo(int n, int current =0, int next=1) { 
    if (n == 0 ) { 
        return current;
    }
    return fibo(n-1,next,current + next);
}

int main () { 
    int n; 
    cout <<  "Enter n : ";
    cin >> n; 
    cout << fibo(n) <<endl;
}



