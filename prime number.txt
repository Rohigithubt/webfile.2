#include<iostream>
using namespace std;
int main()
{
    int n,i,flag;
    cout<<"enter the number";
    cin>>n;
      if(n==0 || n==1)
      {
          flag=1;
      }
      else 
      {
          for (i=2;i<=n/2;i++)
          {
              if (n%i==0)
              {
                  flag=1;
              }
          }
      }
      if (flag==0)
      {
          cout<<"prime number";
      }
      else 
      {
          cout<<"not prime number";
      }
      return 0;
}