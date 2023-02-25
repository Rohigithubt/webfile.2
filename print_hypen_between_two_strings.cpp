//print hypen between two strings at space 
#include<iostream>
#include<string>
using namespace std;
int main()
{
 string s1;
 getline(cin,s1);
for(int i=0;i<s1.length();i++)
{
    if(s1[i]==32)
    {
        cout<<"-";
    }
    else
    {
    cout<<s1[i];
    }
}
}
/*output->

rohit jain
rohit-jain*/