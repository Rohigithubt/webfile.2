//find minimum and maximum element in an array using function
#include<bits/stdc++.h>
using namespace std;
int maxelement(int a[],int n){
	int max=a[0];
	for(int i=1;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	return max;
}
int minelement(int a[],int n){
	int min=a[0];
	for(int i=0;i<n;i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	return min;
}
int main()
{
     int n;
     cout<<"enter the value"<<endl;
     cin>>n;
     int a[n];
     cout<<"enter the elements in array"<<endl;
     for(int i=0;i<n;i++){
     	cin>>a[i];
	 }
	 cout<<"max element="<<maxelement(a,n)<<endl;
	 cout<<"min element="<<minelement(a,n)<<endl;
}
/*  output->

enter the value
5
enter the elements in array
1
2
3
4
5
max element=5
min element=1  */
