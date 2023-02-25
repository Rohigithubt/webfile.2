//reverse a string by using another variable
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2="";
    cout<<"enter a string=";
    getline(cin,s1);
    for(int i=s1.length();i>=0;i--)
    {
        s2.push_back(s1[i]);
    }
    cout<<s2;
}
/*output->

enter a string=rohit jain
niaj tihor*/