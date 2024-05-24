/*it states that if we are given two numbers n1,n2 
  then, gcd(n1,n2) = gcd(n1-n2,n2)  ; n1>n2
        gcd(a,b) = gcd(a%b,b)  ; a>b
  using this theoram , we can solve the basic math questions we less time complexity
*/ 

#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  } else {
    return gcd(b, a % b);
  }
}

int main() {
  int a = 10;
  int b = 15;

  cout << "The GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;

  return 0;
}
