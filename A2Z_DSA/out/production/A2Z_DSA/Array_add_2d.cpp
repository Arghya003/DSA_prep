#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter values of n,m"<<endl;
    cin>>n;
    cin>>m;
    
    int a[n][m];
    int b[n][m];
    cout<<"Enter elements of A"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cin>>a[i][j];
    }
    cout<<"Enter elements of B"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
             cin>>b[i][j];
        }}
        int c[n][m];
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c[i][j]= a[i] [j] +b[i][j];
        }
        }
        cout<<"Added Mtrix"<<endl;
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
        }
        return 0;

}
