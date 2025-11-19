#include <iostream> 
using namespace std; 

int binarySearch (int arr[], int size,int target) { 
    int l = 0; 
    int r= size-1 ;

    while (l< r){
        int m = (l + r )/ 2 ;
        int middle = (arr[l] + arr [r]);
        if (middle == target ) { 
            return 1; 
        }
        if (middle  < target) {
            l= m+1;
        }else { 
            r = m-1;
        }
    } 
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
    cout<<"Binary Search Results: " << endl;
   if (binarySearch(x,n,target)) { 
    cout << "Elememnt found in the array"<<endl;
} else { 
       cout << "Elememnt not found in the array"<<endl;

   };
    cout<<endl;
    }

