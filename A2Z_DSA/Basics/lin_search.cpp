#include<iostream>
using namespace std;
 int linearsearch(int arr[],int key,int n){
 for(int i=0;i<n;i++){
 if(arr[i]==key)
 return i;
 }
 return -1;
 }
 int main(){
 int n,key;
 cout<<" enter the size of array=";
 cin>>n;
 int arr[n];
 cout<<"enter the elements of array"<<endl;
 for(int i=0;i<n;i++){
cin>>arr[i];
 }
 cout<<"enter the element to be found="<<endl;
 cin>>key;
 int index= linearsearch(arr,key,key);
 if(index!=-1)
 cout<<"found at = "<<index<<endl;
 else
 cout<<"sorry not found"<<endl;
 return 0;

 }
