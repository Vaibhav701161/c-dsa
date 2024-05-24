/*
how can I extract all the digits of a number : i can get all the digits in reverse order 
by using % property by 10.
say, for example the number is 9876
9786%10 = 6
978%10 = 8
97%10 = 7
9%10 = 9
now, n becomes 0
but how can i get all the digits in the correct order?
*/

  #include<bits/stdc++.h>
  using namespace std;
  int main(){
int n;
cout <<"enter the value of n: "<< endl ;
cin >> n ;
while (n>0){
    int digit = n%10;
    cout << digit << " ";
    n /= 10 ;
    
}
return 0;

  }