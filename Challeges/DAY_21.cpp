#include <bits/stdc++.h>
#define ll long long 
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
    vector<int>ans;
    while(n%2==0){
      ans.push_back(2);
      n/=2;
   }
   for(int i=3;i<=sqrt(n);i+=2){
      while(n%i==0){
       ans.push_back(i);
       n/=i;
      }
   }
   if(n>2){
    ans.push_back(n);
   }return ans;
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
