#include <iostream> 
using namespace std; 

void selectionSort (int arr[], int size) { 
    for (int i=0; i< size; i ++) { 
        int smallest_index = i ;
        for (int j = i; j < size; j++ ) { 
            if (arr[j] < arr[smallest_index]) {
                smallest_index = j;
            } 
        }
        int temp = arr[i];
        arr[i] = arr[smallest_index];
        arr[smallest_index] = temp;
    }
}

int main () { 
    int n;
    cout << "Enter length of arrray: "; 
    cin >> n;
    int x[n];
    for (int i=0; i< n; i ++) { 
        cout << "Enter N"<< i+1<< ": "; 
        cin >> x[i]; 
    }
    cout<<endl;
    selectionSort(x,n);
    cout<<"Selection Sort Results: " << endl;
    for (int i=0; i< n; i ++) { 
        cout << x[i] << " ";
    }
    cout<<endl;
    }

