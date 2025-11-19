#include <iostream> 
using namespace std; 

int linearSearch (int arr[], int size,int target) { 
    for (int i=0; i <size; i++) { 
        if (arr[i] ==target) { 
            cout << "Element found in the array"<<endl;
            return -1;
        }
    }
    cout << "Element not found in the array"<<endl;
    return 0;
}

int main () { 
    int n;
    cout << "Enter length of arrray: "; 
    cin >> n;
    int x[n];
    for (int i=0; i< 5; i ++) { 
        cout << "Enter N"<< i+1<< ": "; 
        cin >> x[i]; 
    }
    int target;
    cout << "Enter target: "; 
    cin >> target;

    
    cout<<endl;
    cout<<"Linear Search Results: " << endl;
    linearSearch(x,n,target);
    cout<<endl;
    }

