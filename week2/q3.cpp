#include <iostream>
#include <cmath>
using namespace std; 

int main () { 
    float n1;
    cout << "Enter number 1: ";
    cin >> n1;
    cout << endl;    
    float n2;
    cout << "Enter number 2: ";
    cin >> n2;    
    cout << endl;   
     
    cout << "Max is: " << fmax(n1,n2) << endl;
    cout << "Min is: " << fmin(n1,n2) << endl;


}