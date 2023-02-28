//project for student result
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter the number of subjects:"<<endl;
    cin>>n;
    cout<<"Enter the obtained marks in perticular subjects.Marks should be less than or equal to 100:"<<endl;
    int a[n];
    for(i=0;i<n;i++){
        int b;
        cin>>b;
        while(b>100){
            cout<<"You entered marks which is greater than 100.Please enter less than or equal to 100:"<<endl;
            cin>>b;
        }
        a[i]=b;
        sum=sum+a[i];
    }
        cout<<"The marks of a student are:"<<endl;
        for(i=0;i<n;i++){
            cout<<a[i]<<endl;
        }
        cout<<"The average of marks of the student is:"<<endl;
        int avg=sum/n;
        cout<<avg<<endl<<endl;
        cout<<"The percentage of the student is:"<<endl;
        int s=n*100;
        int per=(sum*100)/s;
        cout<<per<<"%";
  
}
/*  output->

Enter the number of subjects:
5
Enter the obtained marks in perticular subjects.Marks should be less than or equal to 100:
99
999
You entered marks which is greater than 100.Please enter less than or equal to 100:
98
97
99
99
The marks of a student are:
99
98
97
99
99
The average of marks of the student is:
98

The percentage of the student is:
98%   */