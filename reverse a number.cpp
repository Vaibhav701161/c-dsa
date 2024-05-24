 #include<bits/stdc++.h>
  using namespace std;
  int main(){
    int reverseNumber =0;
    int lastDigit=0;
   int n;
   cout<<"Enter a number: ";
   cin>>n;
   while(n > 0){
   lastDigit = n%10;
   reverseNumber = (reverseNumber*10) +lastDigit;
   n = n/10;
   
   

  }
  cout << "the last digit is :"<< " "<< lastDigit << endl;

  
  cout << " the number is :" << reverseNumber << endl;
  return 0;
   }
    

