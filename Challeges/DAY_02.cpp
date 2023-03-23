#include<bits/stdc++.h>
using namespace std;
 
//This function check if x  is prime or not
// 0 <= X <= 1e10

bool IsPrime(int x){
    for(int i=1;i<sqrt(x);i++){
        if(x%i==0)return false;
    }
    return true;
}
 
int main(){
    int x;   cin>>x;
    if(IsPrime(x))cout<<"Is Prime\n";
    else cout<<"Is not Prime\n";
    return 0;
}
 
// what is the wrong in that code ???
