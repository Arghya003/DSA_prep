#include <iostream>
using namespace std;
int main()
{
    int marks[100]={0};
    int n;
    cout<<"enter no of students"<<endl;
    cin>>n;
    cout<<"enter marks"<<endl;
    for(int i =0;i<n;i++)
    cin>>marks[i];
    cout<<"output:  ";
    for(int i=0;i<100;i++)
    cout<<marks[i]<<" ,";
    cout <<endl;
    return 0;

}
