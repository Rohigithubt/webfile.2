//program to find duplicate element in the string
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
void printduplicate(string s1){
    int len=s1.length();
    int c1=0;
    sort(s1.begin(),s1.end());
    for(int i=0;i<len-1;i++){
        int count=1;
        while(i<len-1 && s1[i]==s1[i+1]){
            count++;
            i++;
            c1++;
        }
        if(count>1){
            cout<<"the duplicate element is="<<s1[i]<<" for "<<count<<" times"<<endl;
        }
    }
    if(c1==0){
        cout<<"duplicate element not found";
    }
   
}
int main()
{
    string s1;
    cout<<"enter the string:";
    getline(cin,s1);
    printduplicate(s1);
}
/*   output->

enter the string:rohhit
the duplicate element is=h for 2 times
*/