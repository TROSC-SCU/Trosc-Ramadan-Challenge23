#include <iostream>
 
using namespace std;
 
int main(){
   // This code is to print array elements 
 
    int arr[5] = {1, 3, 4, 6, 7};
    for(int i = 0; i <= 4; i++)
        cout << arr[i] << ' ';
 
    return 0;
}

// what is the wrong in that code ???
// Answer: The index starts in the for loop from 1
// and that is wrong because the first element stored in the
// array is at index 0.

// Note: that this code results in an array overflow
// because it acceses an element have index 5
// which is beyond the allocated bounds of the array,
// The last element in the array is at index
// less than the size of the array by one (size-1).

//Remeber: That C/C++ is dangerous with array boundaries
