// 4. Count Digits of a Number (Using do-while loop)
// Problem: Input a number and count how many digits it has.

// Hint: Use do-while so even 0 gives output 1 digit.


#include <iostream> 
using namespace std; 


int main() { 
    int x;
    cout << "Enter N: "; 
    cin >> x; 
    int i = x;
    int counter = 0;
    if (x == 0) {
        i =1;
    }
    do {
        i = i / 10;
        counter++;
    }while (i!=0);

    cout << "Number of digits: " << counter<< endl;
}