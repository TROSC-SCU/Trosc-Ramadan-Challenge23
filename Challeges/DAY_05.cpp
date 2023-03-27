#include <bits/stdc++.h>
using namespace std;

// this code to get the binary representation of decimal number

string DecimaltoBinary(int num){
    string Bin;
    string s;
    int n=0;
    while(num){
    s= to_string(num%2);
    Bin.insert(n,s);
      num /= 2;
      n++;
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
// the wrong is that he used push_back function and this get the element in the last so when we use reverse function this make error.
