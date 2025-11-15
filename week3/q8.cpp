#include <iostream> 
using namespace std; 

int main () { 
    int x;
    cout << "Enter N: "; 
    cin >> x; 
    for (int i = 1; i<=x; i++) {
        if (i == 1 || i == x){
            for (int j = 1; j <=x; j++) {
                    cout << "*";
            } 
        } else {
            for (int j = 1; j <=x; j++) {
                if (j == 1 || j == x) {
                    cout << "*";
                }else {

                    cout << " ";
                }
            }
        }
    cout<<endl;
    }
}
