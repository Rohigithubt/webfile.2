#include<iostream>
using namespace std;
#include<math.h>
bool isprime(int n)
{
    if(n==0 || n==1)
    {
        return false;
    }
    else
    {
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }
}
bool iseven(int n)
{
    if(n%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isodd(int n)
{
    if(n%2!=0)
    {
        return 1;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cout<<"enter the number to be perform operations=";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        
        if(i>0 && i<=10)
        {
            cout<<i<<endl;           //print 1 to 10 digits
        }
        else if(i>10 && i<=20)
        {
          continue;                   //skip 11 to 20 digits
        }
        else if(i>20 && i<=30 && iseven(i)==true)
        {
            cout<<"even number="<<i<<endl;     //print even number from 21 to 30
        }
        else if(i>30 && i<=40 && isodd(i)==true)
        {
            cout<<"odd number="<<i<<endl;          //print even number from 31 to 40
        }
        else if(i>40 && i<=50 && isprime(i)==true)
        {
            cout<<"the prime number="<<i<<endl;     //print prime number from 41 to 50 
        }
     
    }
}
