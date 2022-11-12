#include<iostream>
using namespace std;
void print(int *arr){
  cout<<"inside of  func= "<<sizeof(arr)<<endl;
  cout<<"in side func: "<<endl;
  int n= sizeof(*arr)/sizeof(int);
  for(int i=0;i<n;i++)
  cout<<arr[i]<<endl;
}

int main()
{
  int arr[]={1,2,3,4,5,6};
  int n= sizeof(arr)/sizeof(int);
  cout<<"size inside main = "<<sizeof(arr)<<endl;
  cout<<"inside main :  "<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
  }
  print(arr);
  return 0;
}
