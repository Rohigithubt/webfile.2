#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x,count=0;
    cout<<"enter the size of array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements in array:"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the number which occurance you want to find:"<<endl;
    cin>>x;
    
    for(i=0;i<n;i++){
        if(a[i]==x){
            count=count+1;
        }
    }
    if(count==0){
        cout<<"not found"<<endl;
    }
    else{
    cout<<"the occurance of "<<x<<" is="<<count<<endl;
    }
        
    }
/*  output->
enter the size of array:
5
enter the elements in array:
1
2

33
4
4
enter the number which occurance you want to find:
4
the occurance of 4 is=2   */

