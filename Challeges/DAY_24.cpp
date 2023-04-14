#include <bits/stdc++.h>

using namespace std;

// you have a string S each letter in it is ′L′or ′R′, find the maximum number of balanced strings by splitting the original string.

// Balanced strings are those that have an equal quantity of ′L′and ′R′ characters.


int Balanced_Strings(string s){
    int count=0,Balanced=0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'L')
            count++;
        else
            count--;

        if(count == 0)
            Balanced++;
    }
    return Balanced;
}


int main (){
    string s;
    cin >> s;
    cout << Balanced_Strings(s);
    return 0;
}
