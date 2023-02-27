//to check occurance of character in string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
     string s;
     char ch;
     cout<<"enter a string=";  //take a string
     getline (cin,s);
   cout<<"enter a character=";  //take a character
   cin>>ch;
   for(int i=0;i<s.length();i++)
   {
       if(s[i]==ch)
       {
           count=count+1;
       }
   }
   cout<<"occurance of "<<ch<<" is="<<count;
   
}
/*  output->
     enter a string=hfghfhfhhf
     enter a character=h
     occurance of h is=5  */
                    
                    
                    