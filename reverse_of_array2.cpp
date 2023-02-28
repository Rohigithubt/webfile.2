#include<bits/stdc++.h>
using namespace std;
void printarray(int a[],int n){
    cout<<"the array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
    void reversearray(int a[],int start,int end) 
    {
       while(start<end){
         int temp=a[start];
         a[start]=a[end];
         a[end]=temp;
         start++;
         end--;
       
       }
    }

int main()
{
    int n,i;
    cout<<"enter the size of array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements in the array:"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
      // int n = sizeof(a) / sizeof(a[0]);
    printarray(a,n);
    reversearray(a,0,n-1);
     cout<<"reverse array:"<<endl;
      printarray(a,n);
    return 0;
}
/*  output->

enter the size of array:
5
enter the elements in the array:
1
2
3
4
5
the array is:
1
2
3
4
5
reverse array:
the array is:
5
4
3
2
1  */
