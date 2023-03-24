#include<bits/stdc++.h>
using namespace std;
 
//This function check if x  is prime or not
// 0 <= X <= 1e10

bool IsPrime(long x){
    if(x<2)  return false;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if(x%i==0)return false;
    }
    return true;
}
 
int main(){
    long x;   cin>>x;
    if(IsPrime(x))cout<<"Is Prime\n";
    else cout<<"Is not Prime\n";
    cout << x;
    return 0;
}
 
// what is the wrong in that code ???
/*               Answer:
  First: By using random test cases we find that each
  testcase prints "Is not Prime" and that is because the
  loop inside the function starts from 1, knowing that
  all the numbers except 0 are divisible by 1 that
  makes an error, writing an IF statement to handle
  numbers less than 2 and starting the for loop from
  2 should fix the error.


  Second: Notice that the input may reach 1e10 while
  "int" datatype can't handle numbers greater than
  2147483647, so we may face an interger overflow,
  To solve that we will change the int data type to
  long which will handle much bigger values.

  Note: That their is no need in this code to change
  the datatype of the iterator in the for loop because
  it will reach "sqrt(x)" only meaning that if x =1e10
  'i' will only reach 1e5 which is in the range of "int"
   datatype.
*/
