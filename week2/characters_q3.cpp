#include <iostream>
#include <cctype>
#include <string>
using namespace std; 

int main () { 
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    int count_vowels = 0; 
    int count_consonants = 0; 
    for (int i = 0; i < s.length(); i++) { 
        if (isspace(s[i])){ 
            continue;
        }
        if (!isalpha(s[i])) { 
            cout << "Invalid character" << endl; 
            return -1;
        }
        s[i] = tolower(s[i]);
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u'){ 
            count_vowels +=1;
        }
        else { 
            count_consonants +=1;
        }
    }
    cout << "Vowels: " << count_vowels <<endl; 
    cout << "Consonants: " << count_consonants <<endl; 
}