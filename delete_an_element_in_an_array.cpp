#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,del,count=0;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter the elements in array"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"enter the element you want to delete"<<endl;
	cin>>del;
	for(int i=0;i<n;i++){
		if(del==a[i]){
			count=count+1;
		}
	}
	if(count==0){
		cout<<"this element is not found"<<endl;
	}
	else{
		for(int i=0;i<n;i++){
			if(del==a[i]){
				continue;
			}
			else{
				cout<<a[i]<<endl;
			}
		}
	}
	
}
/*   output->

enter the size of array
5
enter the elements in array
1
2
3
4
5
enter the element you want to delete
5
1
2
3
4         */