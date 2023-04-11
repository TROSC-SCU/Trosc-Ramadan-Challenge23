#include <bits/stdc++.h>

using namespace std;

// Given three numbers A, B and C that donate the lengths of the three sides of a triangle. 
// Determine whether this triangle is valid or not
 
bool is_Triangle(int A, int B, int C) {
    return (A + B > C && A + C > B && B + C > A);

    
}

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    cout << (is_Triangle(A, B, C) ? "YES" : "NO"); 
    return 0;
}
