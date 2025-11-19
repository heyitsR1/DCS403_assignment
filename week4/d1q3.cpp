#include <iostream> 
using namespace std; 

int arraySum(int arr[], int size) { 
    int s = 0;
    for (int i=0; i< size; i ++) { 
        s+=arr[i];
    }
    return s;
}

int main () { 
    int n;
    cout << "Enter length of arrray: "; 
    cin >> n;
    int x[n];
    for (int i=0; i< 5; i ++) { 
        cout << "Enter N: "; 
        cin >> x[i]; 
    }

    cout<< "Sum is " << arraySum(x,n)<<endl;
    }

