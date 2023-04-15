#include <bits/stdc++.h>

using namespace std;

// you have a string S each letter in it is ′L′or ′R′, find the maximum number of balanced strings by splitting the original string.

// Balanced strings are those that have an equal quantity of ′L′and ′R′ characters.


int Balanced_Strings(string s){
    int counter=0,res=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='R'){
            counter++;
        }else{
            counter--;
        }
        if(counter==0){
            res++;
        }
    }return res;
}


int main (){
    string s;
    cin >> s;
    cout << Balanced_Strings(s);
    return 0;
}
