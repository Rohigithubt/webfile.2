//to remove vowel from a string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2="";
    cout<<"enter a string=";   //take a string
    getline(cin,s1);
   for(int i=0;i<s1.length();i++){
        if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' ||s1[i]=='o' || s1[i]=='u'){
            string::iterator it=remove(s1.begin(),s1.end(),i);
            s1.erase(it,s1.end());
        }
        else{
            string ch(1,s1[i]);
            s2.append(ch);
        }
   }
   cout<<s2;
}
output->
/*
enter a string=rohit jain
after removing vowel=rht jn  */