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

bool isPalindrome(string &s, int l, int r) { 
    if (l >= r ) { 
        return true;
    }
    if (s[l] != s[r]) { 
        return false;
    }
    return isPalindrome(s,l+1,r-1);
}

int main () { 
    string s; 
    cout <<  "Enter string: ";
    getline(cin,s);  
    if (isPalindrome(s,0,s.length()-1)) {
        cout << "Palindrome" <<endl;
    } else { 
        cout << "Not Palindrome"<<endl;
    }
    return 0;
}



