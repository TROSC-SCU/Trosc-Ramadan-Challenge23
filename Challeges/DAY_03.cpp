#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
  
/*this code to get the prefix sum of elements in the array 
prefix sum ==> every the element is equal the sum of itself and all previous elements 
if you don't understand about it please google it :)
*/
 
int n;
cin >> n;
int arr[n];
for (int i=0;i<n;i++)
    cin >> arr[i];
 
// prefix sum 
for ( int i=1 ;i<n;i++) 
     arr[i]+=arr[i-1];
}

// what is the wrong in that code ???

// the array becomes out of range
