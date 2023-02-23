#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"enter the number";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=i;k>=1;k--)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}
  output->

 ********
 * * * * * * * *
  *  *  *  *  *  *  *  *
   *   *   *   *   *   *   *   *
    *    *    *    *    *    *    *    *
     *     *     *     *     *     *     *     *
      *      *      *      *      *      *      *      *
       *       *       *       *       *       *       *       *
