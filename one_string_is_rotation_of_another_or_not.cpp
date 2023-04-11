//to check one is rotation of another or not
#include<iostream>
#include<string.h>
using namespace std;
bool isrotating(string s1,string s2){
    string temp;
    if(s1.size()!=s2.size()){
        return 0;
    }
    else{
        temp=s1+s1;
        if(temp.find(s2)!=string::npos){
            return 1;
        }
        else{
            return 0;
        }
    }
}
int main()
{
    string s1,s2;
    cout<<"enter the main string:"<<endl;
    getline(cin,s1);
    cout<<"enter the rotated string:"<<endl;
    getline(cin,s2);
    if(isrotating(s1,s2)){
        cout<<"the string is rotating";
    }
    else{
        cout<<"the string is not rotating";
    }
    
}
/*  output->
enter the main string:
abcd
enter the rotated string:
acdb
the string is not rotating
*/