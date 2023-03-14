//factorial program using recursion
#include<iostream>
using namespace std;
int factorial(int n){
    if(n<0){
        return -1;
    }
    else if(n==0){
        return 1;
    }
    else{
        return (n*factorial(n-1));
    }
}
int main()
{
    int fact,n;
    cout<<"enter the number";
    cin>>n;
    fact= factorial(n);
    cout<<"the factorial of the number is="<<fact;
}


/*  output->
enter the number=5
the factorial of the number is=120  */