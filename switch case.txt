#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a value between from 1 to 7=";
    cin>>n;
    switch(n)
    {
        case 1:
        cout<<"today is sunday";
        break;
        case 2:
        cout<<"today is monday";
        break;
        case 3:
        cout<<"today is tuesday";
        break;
        case 4:
        cout<<"today is wednesday";
        break;
        case 5:
        cout<<"today is thrusday";
        break;
        case 6:
        cout<<"today is friday";
        break;
        case 7:
        cout<<"today is saturday";
        break;
        default:
        cout<<"not match";
        break;
    }
}