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
void heapify(int* arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    
    if (left < n && arr[left] > arr[largest])
        largest = left;
    
    if (right < n && arr[right] > arr[largest])
        largest = right;
    
    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }
}

void heapSort(int* arr, int n) {
    // max heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    
    // Extract elements
    for (int i = n - 1; i > 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, i, 0);
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



    heapSort (arr,n);

    cout << endl;
    cout << "Sorted Array : " << endl;
    printArray(arr,n);


}
