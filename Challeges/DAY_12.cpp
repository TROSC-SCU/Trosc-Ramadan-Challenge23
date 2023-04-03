 #include <bits/stdc++.h> 

 using namespace std;

//Given an integer n, return true if it is a power of two. Otherwise, return false.

//An integer n is a power of two, if there exists an integer x such that n == 2x.

    bool isPowerOfTwo(int n) {
      
      // please compleate the code :)
      if((log2(n)/log2(2))-(int)(log2(n)/log2(2))==0){
          return true;
      }else{
          return false; 
      }
    }
      
    

int main(){
int n;
  cin >> n;
  if (isPowerOfTwo(n)==true) 
    cout<<"This number is power of 2";
  else 
    cout<<"This number is not power of 2";
  return 0;
  
}
