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


void bubbleSort(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
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



    bubbleSort (arr,n);

    cout << endl;
    cout << "Sorted Array : " << endl;
    printArray(arr,n);


}
