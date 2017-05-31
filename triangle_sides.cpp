#include<iostream>
#include<cmath>
using namespace std;
int main () {
int x1,x2,x3,y1,y2,y3,a,b,c;
cout<<"Enter the value of x1";
cin>>x1;
cout<<"Enter the value of x2";
cin>>x2;
cout<<"Enter the value of x3";
cin>>x3;
cout<<"Enter the value of y1";
cin>>y1;
cout<<"Enter the value of y2";
cin>>y2;
cout<<"Enter the value of y3";
cin>>y3;
a=sqrt(((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
b=sqrt(((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3)));
c=sqrt(((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1)));
 if ((a==b)&&(a==c)) {
  cout<<"equilateral"<<endl;
  }
   else if ((a!=b)&&(a!=c)) {
   cout<<"scalene"<<endl;
   }
    else if ((a=b)&&(a!=c)) {
    cout<<"isosceles"<<endl;
    }
    else if ((a=c)&&(a!=b)) {
    cout<<"isosceles"<<endl;
    }
    else if ((b=c)&&(b!=a)) {
    cout<<"isosceles"<<endl;
    }
    return 0;
    }
    
