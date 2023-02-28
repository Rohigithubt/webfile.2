//program to find peak elements which is not smaller than its neighbours
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the size of array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements in  array:"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"the peak elements which is not smaller than its neighbours:"<<endl;;
    for(i=1;i<n-1;i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            cout<<a[i]<<endl;
        }
    }
}
/*  output->

enter the size of array:
6
enter the elements in  array:
2
3
4
2
5
3
the peak elements which is not smaller than its neighbours:
4
5  */
