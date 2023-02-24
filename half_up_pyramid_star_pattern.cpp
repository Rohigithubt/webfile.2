#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"enter the number=";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(k=0;k<=(n-2)-i;k++)
        {
            cout<<" ";
        }
        for(j=0;j<(i*2)+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

output->

enter the number=5
    *
   ***
  *****
 *******
*********

