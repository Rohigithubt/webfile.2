//to find anagram or not
#include <bits/stdc++.h> 
using namespace std;
bool isanagram(string s1,string s2){
    
    if(s1.length()!=s2.length()){
         return 0;
     }
    else{
        string::iterator it;
       for(int i=0;i<s2.length();i++) {
        
            if(s1.find(s2[i])<s1.length()){
                 it=remove(s1.begin(),s1.end(),s2[i]); //rmv[i] is removed
                 s1.erase(it); 
 
            }
           else {
               return 0;
           }
       }
       return 1;
    }
}

int main()
{
string s1,s2;
getline(cin,s1);
getline(cin,s2);
if(isanagram(s1,s2)){
     cout<<"strings are anagram to each other";
}
else{
cout<<"strings are not anagram to each other";
}
return 0;
}
/*output->

rohit
oirth
strings are anagram to each other*/





