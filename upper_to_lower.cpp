//to convert upper case to lower case in string
#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     char ch;
     cout<<"enter a string=";  //take a string
     getline (cin,s);
     for(int i=0;i<s.length();i++)
     {
         ch=tolower(s[i]);
         cout<<ch;
     }
}
/*  output->
     enter a string=ROHIT JAIN
                    rohit jain    */
