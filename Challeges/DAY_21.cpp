#include <bits/stdc++.h>

using namespace std;

// Given a number N Print the prime factors of N

// Prime Factorization is finding which prime numbers multiply together to make the original number.

/*
  Ex: 
  if the input number is 12, then the output should be “2 2 3”
  if the input number is 13, then the output should be “13”
/*

vector < int > prime_factorization(ll n){
    // complete the function
}

int main (){
    ll n;
    cin >> n;
    vector < int > prime_factors = prime_factorization(n);
    for(int i = 0; i < prime_factors.size(); i++)
        cout << prime_factors[i] << ' ';
    return 0;
}
