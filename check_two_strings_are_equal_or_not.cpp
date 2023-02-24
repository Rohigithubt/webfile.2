#include<iostream>
using namespace std;
int main()
{
    char n1[8],n2[8],i,j;
    cout<<"enter first string=";
    cin>>n1;
    cout<<"enter second string=";
    cin>>n2;
   
   for(i=0,j=0;i<=5,j<=5;i++,j++)
   {
       if(n1[j]==n2[i])
       {
          continue;
          
       }
       else
       {
           break;
       }
      
   }
   if( n1[j]==n2[i])
       {
          
            cout<<"anagram";
       }
       else
       {
           cout<<"not";
       }
}