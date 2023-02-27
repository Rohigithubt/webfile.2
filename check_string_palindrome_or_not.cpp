//to check string is palindrome or not
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2="";
    
    
    cout<<"enter a string=";   //take a string
    getline(cin,s1);
    for(int i=s1.length()-1;i>=0;i--)
    {
        
       // s2+=s1[i];      //other short method
        string character(1,s1[i]);   //type casting from character to string
        s2.append(character);
        
    }
    if(s2==s1)
    {
        cout<<"palindrome";
    }
    else
    {
        
        cout<<"not palindrome";
    }
}

output->

/*  enter a string=naman
    palindrome  */
