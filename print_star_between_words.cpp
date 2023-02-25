//print star between two words 
#include<iostream>
#include<string>
using namespace std;
int main()
{
 string s1;
 getline(cin,s1);
for(int i=0;i<s1.length();i++)
{
    cout<<s1[i]<<"*";
}
}
/*output->

rohit 
r*o*h*i*t* */