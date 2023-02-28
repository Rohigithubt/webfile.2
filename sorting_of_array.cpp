#include<bits/stdc++.h>
using namespace std;
void printarray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
void sortarray(int a[],int n){
    int num=n-1;
    while(num--){
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    }
}
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
    cout<<"array is:"<<endl;
    printarray(a,n);
    sortarray(a,n);
    cout<<"sorted array is:"<<endl;
     printarray(a,n);
}
/*   output->

enter the size of the array:
5
enter the elements in the array:

35
4
2
1
4
array is:
35
4
2
1
4
sorted array is:
1
2
4
4
35   */
