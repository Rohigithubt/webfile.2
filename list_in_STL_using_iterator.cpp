//print a list using iterator
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> n(5,100);
    list<int>::iterator it;
    for(it=n.begin();it!=n.end();it++){
        cout<<*it<<" ";
    }
}
/*  output->


100 100 100 100 100  */ 
