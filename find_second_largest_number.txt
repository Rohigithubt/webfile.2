//find the minimum and maximum number
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    int c[n];
    cout<<"enter the elements in the array:"<<endl;
    for(i=0;i<n;i++){
        cin>>c[i];
    }
     int a=c[0],b=c[0];
    for(i=0;i<n;i++){
     if(b<c[i]){
         if(a<c[i]){
             b=a;
             a=c[i];
         }
     
         else{
             b=c[i];
         }
     }
    }
    cout<<"the second largest number is="<<b<<endl<<endl;
    
    
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
the second largest number is=4   */
