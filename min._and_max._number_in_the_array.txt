//find the minimum and maximum number
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements in the array:"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"the largest number in the array is:"<<endl;
     int max=a[0];
    for(i=0;i<n;i++){
       
       
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<max<<endl<<endl;
    cout<<"the minimum number in the array is:"<<endl;
     int min=a[0];
    for(i=0;i<n;i++){
       
       
        if(a[i]<min){
            min=a[i];
        }
    }
    cout<<min<<endl<<endl;
    
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
the largest number in the array is:
5

the minimum number in the array is:
1   */