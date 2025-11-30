#include <iostream> 
using namespace std; 

int j=0; 
int printArray(int* arr,int n) { 
    if (n ==0 ) { 
        return 0;
    }
    cout << arr[j]<<endl;
    j++;
    return printArray(arr,n-1);
}

int main () { 
    int n; 
    cout <<  "Enter n: ";
    cin >> n; 
    int arr [n];
    for (int i=0; i < n; i++) { 
        cout << "Enter value " << i+1 << " : "; 
        cin >> arr[i];
    }
    printArray(arr,n);
}


