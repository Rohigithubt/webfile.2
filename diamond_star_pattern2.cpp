#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"enter the number=";
    cin>>n;
    for(i=1;i<n;i++)
    {
        for(k=0;k<=n-i;k++)
        {
            cout<<" ";
        }
        for(j=1;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=0;i<n;i++)
    {
        for(k=0;k<i;k++)
        {
            cout<<" ";
        }
        for(j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
output->

enter the number=10
          
         *
        **
       ***
      ****
     *****
    ******
   *******
  ********
**********
 *********
  ********
   *******
    ******
     *****
      ****
       ***
        **
         *