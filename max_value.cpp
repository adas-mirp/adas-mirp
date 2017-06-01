#include <iostream>
using namespace std;

int main()
{
    int n, number;
    int max=-100000, smax=-100001;
    cout<<"number of inputs";
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        cout<<"Enter the number";
        cin>>number;
        if (number > smax && number <= max)
        { smax=number;
         }
        else if (number > max)
         { smax=max;
        max=number;
        }
    }
    cout<<"the max value"<<max<<"the second max value"<<smax<<endl;
    return 0;
    }
