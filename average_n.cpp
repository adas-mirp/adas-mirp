#include<iostream>
using namespace std;
int main () {
	int sum=0;
	 float average;
	int N,number;
	cout<<"enter the number of inputs ";
	cin>>N;
	for (int i=1; i<=N; i++)
	{
	        cout<<"Enter the number: ";
                cin>>number;		
        	sum +=number;
	}
	average=sum*1.0/N;
	cout<<average<<endl;
return 0;
}
