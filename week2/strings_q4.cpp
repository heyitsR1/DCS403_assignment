#include <iostream>
#include <cctype>
#include <string>
using namespace std; 

int main () { 
    string s1;
    cout << "Enter a string: ";
    getline(cin, s1);
    string s2;
    cout << "Enter another string: ";
    getline(cin, s2);
    string s3 = s1 +" "+ s2; 
    cout << "Concatinated String: " << s3 << endl; 
}