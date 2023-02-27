//to check two strings in upper case and lower case and check equal or not
#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s1,s2,ch,a,b;
   cout<<"enter two strings=";   //take two strings
   getline(cin,s1);
  getline(cin,s2);
  transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
  transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
  if(s1==s2)
  {
      cout<<"strings are equal";
  }
  else
  {
      cout<<"strings are not equal";
  }
  
}
/*   output->

     enter two strings=rohit
     ROHIT 
     strings are equal  */