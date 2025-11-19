#include <iostream> 
using namespace std; 

void bubbleSort (int arr[], int size) { 
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int j = 0; j <size-1; j++ ) { 
            if (arr[j+1] < arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            } 
        }
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
    bubbleSort(x,n);
    cout<<"Bubble Sort Results: " << endl;
    for (int i=0; i< n; i ++) { 
        cout << x[i] << " ";
    }
    cout<<endl;
    }

