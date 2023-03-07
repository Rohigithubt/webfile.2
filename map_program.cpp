#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	for(int i=0;i<5;i++){
		v.push_back(i);
	}
	vector<int> ::iterator it;
	for(it=v.begin();it!=v.end();it++){
		cout<<*it<<endl;
	}
}
