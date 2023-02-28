#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,pos;
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements in the array:"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the position you want to delete:";
    cin>>pos;
    for(i=0;i<n;i++){
      if(a[pos-1]==a[i])
            continue;
    
    else{
         cout<<a[i]<<endl;
    }
}
}
/*  output->

enter the size of the array:
5
enter the elements in the array:
1
2
3
4
5
enter the position you want to delete:5
1
2
3
4   */
