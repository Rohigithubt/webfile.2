//print n elements in vector using for loop
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    vector<int> v;
    for(int i=1;i<=n;i++){
       v.push_back(i);
    }
    cout<<"The elements in the vector"<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
    }
}
/*   output->

The elements in the vector
1
2
3
4
5   */


