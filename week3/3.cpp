#include <iostream> 
#include<string>
using namespace std; 

int main () { 
    int x;
    cout << "Enter N: "; 
    cin >> x; 
    int i=1;
    int last = 0;
    string res;
    while (x!=0) { 
       last=  x % 10; 
       // cpp is weird, '0' has ascii 48, so if i want to append '1', have to add 49, so doing '0' + 1 = 49
       res += '0'+ last;
       x = x / 10 ;
    }
    cout << res<<endl;


}
