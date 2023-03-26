#include <iostream>
 
using namespace std;
 
int main(){
 
//0<= x <= 1e18
 
    int x;
    cin >> x;
    if (0 <= x && x <= 1e18) {
    cout << x;
    } 
    else{ 
    cout << "x is out of range";
    }
    return 0;

}
// what is the wrong in the code?

/* In C++, the line "0<= x <= 1e18" is invalid syntax.
To determine if x is inside the range, we should use an if statement. 
The proper syntax using if statement is 
    if (0 <= x && x <= 1e18) {
    cout << x;
    } 
    else{ 
    cout << "x is out of range";
    }
    */
