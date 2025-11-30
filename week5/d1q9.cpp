// Q9. Tower of Hanoi (3 Pegs)
// Problem:
// Solve the Tower of Hanoi puzzle for n disks.

// Hint:
// Move n-1 disks to auxiliary rod, move largest disk, then move n-1 back.

// Expected Input:

// 3
// Expected Output:

// Move disk 1 from A to C
// Move disk 2 from A to B
// Move disk 1 from C to B
// Move disk 3 from A to C
// Move disk 1 from B to A
// Move disk 2 from B to C
// Move disk 1 from A to C


#include <iostream> 
#include <string>
using namespace std; 

void hanoi(int n,char from ='A', char to = 'C', char aux = 'B') { 
    if (n == 1) { 
        cout << " Moved disk 1 from " << from << " to " << to << endl;
        return;
    }
    hanoi(n-1,from,aux,to);
    
    cout << " Moved disk " << n << " from "<< from << " to " << to<< endl;

    hanoi(n-1,aux,to,from);
}

int main () { 
    int n; 
    cout <<  "Enter n: ";
    cin >>n;  
    hanoi(n);
    return 0;
}



