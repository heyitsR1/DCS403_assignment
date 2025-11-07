#include <iostream>
#include <cctype>
#include <string>
using namespace std; 

int main () { 
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << " Length of string : " << s.length()<<endl; 
}