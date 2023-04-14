#include <bits/stdc++.h>

using namespace std;

/*
Given an integer x, return true if x is a palindrome, and false otherwise.

ex: 121   -> true
ex: -121  ->false     -121 after reverse become 121- 

note : not allowed to convert the integer to string :(

*/


    bool isPalindromeNumper(int x) {
      // please complete the function  
      if(x<0){
        return false;
      }int n,dig,rev=0;
      n=x;
      while(x!=0){
        dig=x%10;
        rev=(rev*10)+dig;
        x/=10;
      }if(n==rev){
        return true;
        
      }else{
        return false;
      }
    }



int main(){
  int n;
  cin >> n;
  if (isPalindromeNumper(n)) 
    cout<<"Palindrome Number";
  else 
    cout<<"Is not Palindrome Number";
  return 0;
}
