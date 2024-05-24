 // I just have to get reverse of a number and compare it with the orignal number; 
 // if they comes out to be same :: palindrome number confirmed.
  #include<bits/stdc++.h>
  using namespace std;
  int main(){
    int reverseNumber =0;
    int lastDigit=0;
   int n;
   cout<<"Enter a number: ";
   cin>>n;
   int n1 =n;
   while(n > 0){
   lastDigit = n%10;
   reverseNumber = (reverseNumber*10) +lastDigit;
   n = n/10;
   
   

  }
  cout << "the last digit is :"<< " "<< lastDigit << endl;

  
  cout << " the number is :" << reverseNumber << endl;
if(reverseNumber == n1){
    cout << "it is a palindrome number";
}
else {
    cout << "it is not a palindrome number";
}
return 0;
  }
    
 
  