#include <bits/stdc++.h>

using namespace std;

/*
    A cube number is a number multiplied by itself twice
    Ex : 2³ = 2 × 2 × 2 = 8  
    A square number is a number multiplied by itself
    Ex : 2² = 2 x 2 = 4
*/ 

// For a given number n, count the number of cubes and squares from 1 to n

set < int > ans;

int Count(int n){
    // Calculate perfect square numbers
    for (int i = 1; i * i <= n; ++i) {
        ans.insert(i * i);
    }
    // Calculate perfect cube numbers
    for (int i = 1; i * i * i <= n; ++i) {
        ans.insert(i * i * i);
    }

    return ans.size();
}

int main (){
    int n;
    cin >> n;
    cout << Count(n);
    return 0;
}
    
