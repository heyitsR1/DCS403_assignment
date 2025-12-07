#include <iostream>
using namespace std; 

void selectionSort(int* arr, int n) { 

    for (int i=0; i < n; i ++ ) { 
        int minimum = i;
        for (int j =i+1; j<n; j++) { 
            if (arr[j] < arr[minimum]) {
                minimum = j;
            }
        }
        int temp = arr[i];
        arr [i] = arr[minimum];
        arr[minimum] = temp;
    }
}

int main () { 
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    
    for (int i=0; i<n; i++) { 
        cout << "Enter element [" << i+1 << "] : ";
        cin >> arr[i];
    }

    cout << endl;
    cout << "Unsorted Array : " << endl;
    for (int i=0; i<n; i++) { 
        cout << arr [i];
        if (i != n-1) { 
            cout << ",";
        } else { 
            cout << endl;
        }
    }
    // Easier for testing
    // int n = 6;
    // int arr [] = {100,7,3,5000,62,8};

    selectionSort (arr,n);

    cout << endl;
    cout << "Sorted Array : " << endl;
    for (int i=0; i<n; i++) { 
        cout << arr [i];
        if (i != n-1) { 
            cout << ",";
        } else { 
            cout << endl;
        }
    }
    cout << endl;


}