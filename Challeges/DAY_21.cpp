#include <bits/stdc++.h>
 #define ll        long long 

using namespace std;

// Given a number N Print the prime factors of N

// Prime Factorization is finding which prime numbers multiply together to make the original number.

/*
  Ex: 
  if the input number is 12, then the output should be “2 2 3”
  if the input number is 13, then the output should be “13”
*/

vector < int > prime_factorization(ll n){
    // Complete The Function
}

int main (){
    ll n;
    cin >> n;
  vector<int> v=prime_factorization(n);  
  for (auto i:v){
  cout<<i<<' ';
  }
    return 0;
}
