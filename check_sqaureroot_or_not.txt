#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,x;
    cout<<"enter the value to check squareroot or not=";
    cin>>n;
   x=sqrt(n);
   if((x*x)==n)
   {
       cout<<"squareroot possible";
   }
   else 
   {
       cout<<"squareroot not possible";
   }
      return 0;
}