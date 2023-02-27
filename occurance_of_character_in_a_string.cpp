//to count character in string in which digit,character are included
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
     int count=0;
    cout<<"enter a string=";    //take a string
    getline(cin,s1);
    for(int i=0;i<s1.length();i++){
        if((s1[i])>=65 && (s1[i])<=90 || (s1[i])>=97 && (s1[i])<=122){
            count=count+1;
        }
        else{
            continue;
        }
    }
    cout<<"the occurance of character is="<<count;
}
/*  output->

enter a string=rohit123456jain
the occurance of character is=9   */
