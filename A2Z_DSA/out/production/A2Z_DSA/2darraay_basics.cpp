#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;

    int ab[n][m];
    int b[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cin>>ab[i][j];
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
             cin>>b[i][j];
        }}
        int c[n][m];
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c[i][j]= ab[i] [j] +b[i][j];
        }
        }
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<c[i][j]<<endl;
        }
        }
        return 0;

}
