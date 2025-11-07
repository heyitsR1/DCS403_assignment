#include <iostream>
#include <cctype>
#include <string>
using namespace std; 

int main () { 
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    string og_string = s;
    reverse (s.begin(), s.end()); 
    if (s == og_string) {

        cout << og_string << " is a palindrome" << endl;
    } else { 
        cout << og_string << " is not a palindrome" << endl;
    }

    
}