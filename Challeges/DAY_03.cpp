#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
  
/*this code to get the prefix sum of elements in the array 
prefix sum ==> every the element is equal the sum of itself and all previous elements 
if you don't understand about it please google it :)
*/
 
int n;                              // by using the following testcase
cin >> n;                           // n=5
int arr[n];
for (int i=0;i<n;i++)               //arr={0,1,2,3,4}
    cin >> arr[i];
 
// prefix sum 
for ( int i=1;i<n;i++)              // arr={0,1,3,6,10} 
     arr[i]+=arr[i-1];
}


// what is the wrong in that code ???
/*
                            Discussion:
    By using the above testcase we notice an undefined behavior of the code, 
    Because the loop that calculates the prefix sum starts from index 0 then
    calculates the summation of arr[0] and arr[0-1], Knowing that the first
    element in the array is at index 0, That must result in an error.

                            Answer:
    Starting the the loop that calculates the prefix sum from index 1 should 
    solve the error

    Note: This type of error is known as segmentation error or segmentation fault

    Remeber: That C/C++ is dangerous with array boundaries

*/
