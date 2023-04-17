#include <bits/stdc++.h>

using namespace std;

// A number is called good if it contains the digits from 0 to k at least once.

/*
  Ex:
  n = 1243560
  k = 6
  n is Good because contain the digits from 0 to 6
*/

// you given the number n, check the number is good or not

bool is_good(int n, int k){
  // complete the function
}

int main (){
    int n, k;
    cin >> n >> k;
    if(is_good(n, k))
      cout << "YES";
    else 
      cout << "NO";
    return 0;
}
