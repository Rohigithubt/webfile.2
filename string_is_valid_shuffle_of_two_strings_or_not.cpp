//to check the string is valid shuffle of two strings or not
#include<iostream>
#include<string.h>
using namespace std;
bool isshuffle(string s1,string s2,string res){
    int i=0,j=0,f=0;
    int l1=s1.length();
    int l2=s2.length();
    int l3=res.length();
    if((l1+l2)!=l3){
        return 0;
    }
    else{
        while(f<l3){
          if(i<l1 && s1[i]==res[i]){
             i++;
             f++;
          }
         else if(j<l2 && s2[i]==res[i]){
            j++;
            f++;
         }
           else{
             f=1;
             break;
             return 0;
           }
        }
        return 1;
    }
}
int main()
{
    string s1,s2,res;
    cout<<"enter the first string:";
    getline(cin,s1);
    cout<<"enter the second string:";
    getline(cin,s2);
    cout<<"enter the third string:";
    getline(cin,res);
    if(isshuffle(s1,s2,res)){
        cout<<"this is valid shuffle of two strings";
    }
    else{
        cout<<"this is not valid shuffle of two strings";
    }
}
/* output->

enter the first string:abcd
enter the second string:dbca
enter the third string:adbcbcda
this is valid shuffle of two strings
*/