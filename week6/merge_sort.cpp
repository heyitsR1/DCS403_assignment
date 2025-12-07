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


void merge(int* arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    int* L = new int[n1];
    int* R = new int[n2];
    
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    
    int i = 0, j = 0, k = left;
    
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
    
    delete[] L;
    delete[] R;
}

void mergeSortHelper(int* arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSortHelper(arr, left, mid);
        mergeSortHelper(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void mergeSort(int* arr, int n) {
    mergeSortHelper(arr, 0, n - 1);
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



    mergeSort (arr,n);

    cout << endl;
    cout << "Sorted Array : " << endl;
    printArray(arr,n);


}
