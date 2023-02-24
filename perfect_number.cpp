// A perfect number is a positive integer that is equal to sum of all its equal positive divisor  
#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"enter the number=";
    cin>>n;
    for(i=1;i<n;i++)
    {
       if(n%i==0) 
       {
           sum=sum+i;
       }
    }
    if(sum==n)
    {
        cout<<"perfect number";
    }
    else
    {
        cout<<"not perfect number";
    }
   
}
output->

enter the number=28
perfect number
