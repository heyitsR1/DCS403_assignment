// Q8. Reverse a String Using Recursion
// Problem:
// Reverse a given string using recursion.

// Hint:
// Swap characters at two indices, then recursively move inward.

// Expected Input:

// hello
// Expected Output:

// olleh


#include <iostream> 
#include <string>
using namespace std; 

string rev(string &s, int l, int r) { 
    if (l >= r ) { 
        return s;
    }
    char temp = s[l];
    s[l] = s[r];
    s[r] = temp;
    return rev(s,l+1,r-1);
}

int main () { 
    string s; 
    cout <<  "Enter string: ";
    getline(cin,s);  
    cout << rev(s,0,s.length()-1) <<endl;
    return 0;
}



