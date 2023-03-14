//find the kth maximum and kth minimum element in an array
#include<bits/stdc++.h>
using namespace std;
int sortarray(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}
int main()
{
	int n,kmax,kmin;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter the elements in array"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sortarray(a,n);//first of all we have to sort this arrayy
	cout<<"array"<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	cout<<"enter the kth maximum element you want to find"<<endl;
	cin>>kmax;
	cout<<"enter the kth minimum element you want to find"<<endl;
	cin>>kmin;
	for(int i=0;i<n;i++){
		if(kmax==i){
			cout<<"The "<<kmax<<" maximum element in array="<<i+1<<endl;
		}
		
	}
	for(int i=0;i<n;i++){
		if(kmin==i){
			cout<<"The "<<kmin<<" minimum element in array="<<i+1<<endl;
		}
	}
}
