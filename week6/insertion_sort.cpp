#include <iostream>
using namespace std; 


void printArray (int* arr, int n) { 
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

void insertionSort(int* arr, int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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

    // // Easier for testing
    // int n = 6;
    // int arr [] = {100,7,3,5000,62,8};

    cout << endl;
    cout << "Unsorted Array : " << endl;
    printArray(arr,n);



    insertionSort (arr,n);

    cout << endl;
    cout << "Sorted Array : " << endl;
    printArray(arr,n);


}