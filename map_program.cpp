//map program
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> m;
    m["abc"]=1;
     m["bac"]=2;
      m["bca"]=3;
       m["acb"]=4;
        m["cba"]=5;
       map<string,int> :: iterator it;
       for(it=m.begin();it!=m.end();it++){
           cout<<(*it).first<<" "<<(*it).second<<endl;
       }
}
/*  output->
 
abc 1
acb 4
bac 2
bca 3
cba 5  */