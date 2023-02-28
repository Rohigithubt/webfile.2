//reverse array
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
    cout<<"reverse array:"<<endl;
    for(i=n-1;i>=0;i--){
        cout<<a[i]<<endl;
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
reverse array:
5
4
3
2
1

*/
