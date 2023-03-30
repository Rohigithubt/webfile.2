//program to reverse a string
#include<iostream>
using namespace std;
int getlength(char a[]){
    int count=0;
    for(int i=0;a[i]!='\0';i++){
        count++;
    }
    return count;
}
void reversestring(char a[],int n){
    int s=0,e=n-1;
    char temp;
    while(s<e){
        temp=a[s];
        a[s]=a[e];
        a[e]=temp;
        s++;
        e--;
    }
}
int main()
{
    char a[20];
    cout<<"enter the name"<<endl;
    cin>>a;
    cout<<"the length of name is ";
    int len=getlength(a);
    cout<<len<<endl;
    cout<<"reverse string is ";
    reversestring(a,len);
    cout<<a;
}
/* output->
enter the name
Rohit
the length of name is 5
reverse string is tihoR  */