/*
n = 371 ----- 3*3*3 + 7*7*7 +1*1*1 = 371 
*/

 #include<bits/stdc++.h>
  using namespace std;
  int main(){
    int reverseNumber =0;
    int sum =0;
    int lastDigit=0;
   int n;
   cout<<"Enter a number: ";
   cin>>n;
   int n1 =n;
   while(n > 0){
   lastDigit = n%10;
   reverseNumber = (reverseNumber*10) +lastDigit;
   sum = sum + (n*n*n);
   n = n/10;
   
   

  }
  cout << "the last digit is :"<< " "<< lastDigit << endl;

  
  cout << " the number is :" << reverseNumber << endl;
  if (sum == n1){
    cout << "Armstrong number";
    }
    else{
        cout << "Not Armstrong number";
        }
    }
  
   
   
    