#include<iostream>
using namespace std
int main () {
int a,b,c,d;
cout<<"enter the first number>>;
cin>>a;
cout<<"enter the second number>>;
cin>>b;
cout<<enter the third number>>;
cin>>c;
cout<<enter the fourth number>>;
cin>>d;
if ((a>b))&&(a>c)&&(a>d)) {
 cout<<"the maximum value"<<a<<endl;
 }
  if ((b>c)&&(b>d)) {
   cout<<"the second maximum value"<<b<<endl;
   }
   else if ((c>b)&&(c>d)) {
    cout<<"the second maximum value"<<c<<endl;
    }
    else if ((d>b)&&(d>c)) {
     cout<<"the second maximum value"<<d<<endl;
     }
   if ((b>a)&&(b>c)&&(b>d)) {
    cout<<"the maximum value"<<b<<endl;
    }
    if ((a>d)&&(a>c)) {
    cout<<"the second maximum value"<<a<<endl;
    }
    else if ((c>a)&&(c>d)) {
    cout<<"the second maximum value"<<b<<endl;
    }
    else if ((d>a)&&(d>c)) {
    cout<<"the second maximum value"<<d<<endl;
    }
   if ((c>a)&&(c>b)&&(c>d)) {
   cout<<"the maximum value"<<c<<endl;
    if ((a>b)&&(a>d)) {
    cout<<"the second maximum value"<<a<<endl;
    }
    else if ((b>a)&&(b>d)) {
    cout<<"the second maximum value"<<b<<endl;
    }
     else if ((d>a)&&(d>b)) {
      cout<<"the second maximum value"<<d<<endl;
      }
    if ((d>a)&&(d>b)&&(d>c)) {
    cout<<"the maximum value"<<d<<endl;
    }
    if ((a>b)&&(a>c)) {
    cout<<"the second maximum value"<<a<<endl;
    }
   else if ((b>c)&&(b>a)) {
    cout<<"the second maximum value"<<b<<endl;
    }
    else if ((c>a)&&(c>b)) {
    cout<<"the second maximum value"<<c<<endl;
    }
    return 0;
    }
    
