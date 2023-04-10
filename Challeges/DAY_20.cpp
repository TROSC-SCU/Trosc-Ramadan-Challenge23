#include <bits/stdc++.h>

using namespace std;

// Given three numbers A, B and C that donate the lengths of the three sides of a triangle. 
// Determine whether this triangle is valid or not
 
bool is_Triangle(int A, int B, int C) {
    // complete the function 
    if((A+B<=C)||(B+C<=A)||(A+C<=B)){
        return false;
    }else{
        return true;
    }
}

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    cout << (is_Triangle(A, B, C) ? "YES" : "NO"); 
    return 0;
}
