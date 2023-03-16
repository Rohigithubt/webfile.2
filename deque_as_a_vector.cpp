//perform push and pop at front and back by using deque
#include<bits/stdc++.h>
using namespace std;
int main()
{
   deque<int> d;
   d.push_back(2);
   d.push_front(4);   
    d.push_back(5); 
     d.push_front(6);   
      d.push_front(7);   
       d.push_front(8);   
        d.push_front(7);   
         d.push_back(1);   
   for(int i:d){
       cout<<i<<endl;
   }
   cout<<"after pop operation deque will be like that"<<endl;
   d.pop_back();
   d.pop_front();
   for(int i:d){
       cout<<i<<endl;
   }
   cout<<"the element at 1st index=";
   cout<<d.at(1);
   
}
/*   output->

7
8
7
6
4
2
5
1
after pop operation deque will be like that
8
7
6
4
2
5
the element at 1st index=7   */

