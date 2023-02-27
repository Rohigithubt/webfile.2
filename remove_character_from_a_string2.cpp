//to remove a character from a string (2nd method)
#include <iostream>

using namespace std;

int main()
{
     string s1;
    char ch;

    cout<<"enter a string=";    //take a string
     getline(cin,s1);
    cout<<"enter a character=";  //take a character
    cin>>ch;
    
    for(int i=0;i<s1.length();i++){
        if(s1[i]==ch){
            s1.replace(i,1,"");
        }
    }
    cout<<"after removing this character="<<s1;

    return 0;
}
output->

  /*  enter a string=rohit jain
      enter a character=i
      after removing this character=roht jan    */

