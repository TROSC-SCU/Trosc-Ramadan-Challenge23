#include <bits/stdc++.h>
 
using namespace std;

// this code to get the binary representation of decimal number 
 
string DecimaltoBinary(int num){
    string Bin;
    while(num){
        Bin.push_back(num % 2 + '0'); // convert remainder to character
        num /= 2;
    }
          
    reverse(Bin.begin(), Bin.end());
  
    return Bin;
}
 
int main(){
    int n;
    cin >> n;
    cout << DecimaltoBinary(n);
    return 0;
}

// what is the wrong in the code ??
// Adding the ASCII value of '0' to reminder of the number
// pushing it into the Bin string.
// This will result in a string of binary digits that
// represent the binary representation of the number.

