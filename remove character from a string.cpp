//to remove a character in a string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    char ch;

    cout<<"enter a string=";    //take a string
    getline(cin,s1);
    cout<<"enter a character=";  //take a character
    cin>>ch;
   string::iterator it=remove(s1.begin(),s1.end(),ch);
   s1.erase(it,s1.end());
   
    cout<<"after removing this character="<<s1;
    
    
}
output->

/*  enter a string=rohit jain
    enter a character=i
    after removing this character=roht jan  */
