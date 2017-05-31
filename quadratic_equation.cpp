#include<iostream>
using namespace std;
int main() {
int A,B,C;
 cout<<"Enter the value of B";
 cin>>B;
 cout<<"Enter the value of A";
 cin>>A;
 cout<<"Enter the value of C";
 cin>>C;
if (B*B-4*A*C>0) {
 cout<<"real and distinct"<<endl;
 }
 else if (B*B-4*A*C==0) {
  cout<<"identical"<<endl;
  }
  else if (B*B-4*A*C<0) {
   cout<<"imaginary"<<endl;
   }
   return 0;
   }
