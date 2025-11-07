#include <iostream>
#include <cctype>
#include <string>
using namespace std; 

int main () { 
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    reverse (s.begin(), s.end()); 
    cout << " Reverse of string : " << s<< endl; 
}