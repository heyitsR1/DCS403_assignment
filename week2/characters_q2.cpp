
#include <iostream>
#include <cctype>
using namespace std; 

int main () { 
    char c;
    cout << "Enter a character: ";
    cin >> c; 
    if (islower(c)){
        cout << "Uppercase: " << char(toupper(c)) << endl;
    } 
    else if (isupper(c)){

        cout << "Lowercase: " << char(tolower(c)) << endl;
    }   
    else{

        cout  << "Please enter a valid upper or lowercase character" << endl;
    } 

}