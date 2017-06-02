#include<iostream>
using namespace std;
int main () {
int N ;
cout<<"Enter the number of rows:";
cin>>N
 for (int i=1 ; i<=N ; i++)
{ 
 for (int a=N-i ; a>=1 ; a--)
  { cout<<"*";
   }
  for (int p=1 ; p<=i ; p--)
  { cout<<i;
  }
}
return 0;
}
