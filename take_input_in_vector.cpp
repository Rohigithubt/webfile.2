#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   vector<int> v;
   cout<<"enter the size of vector"<<endl;
   cin>>n;
   cout<<"enter the elements in vector"<<endl;
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       v.push_back(x);
   }
   cout<<"the elements in vector are"<<endl;
   for(int i=0;i<n;i++){
       cout<<v[i]<<endl;
   }
}
/*  output->

enter the size of vector
5
enter the elements in vector
2
1
3
4
5
the elements in vector are
2
1
3
4
5   */