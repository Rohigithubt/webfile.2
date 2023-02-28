//array basic program
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x,j,l;
    cout<<"enter the size of array=";    //take size of the array
    cin>>n;
    int a[n];
    cout<<"enter the elements in array=";     //enter the elements
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"the multiplication by 2 of elements in array="<<endl;   
    for(i=0;i<n;i++){
        cout<<a[i]*2<<endl;    //print element with multiply by 2
    }
    cout<<"do you want to update last element in array,press 1 or 0"<<endl;  //enter your choice
    cin>>j;
    switch(j){
        case 1:{
            cout<<"enter the updated value"<<endl;   //updated value
            cin>>l;
            a[n-1]=l;
            for(i=0;i<n;i++){
                cout<<a[i]<<endl;
            }
            break;
        }
        default:{
            cout<<"you don't want to update";
            
        }
    }
}
/*
output->

enter the elements in array=1
2
3
4
5
the multiplication by 2 of elements in array=
2
4
6
8
10
do you want to update last element in array,press 1 or 0
1
enter the updated value
3
1
2
3
4
3
*/
