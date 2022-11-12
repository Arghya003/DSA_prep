#include<iostream>
using namespace std;


void SwapAlternate(int ar[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n)
        swap(ar[i],ar[i+1]);
    }

}
void printArray(int ar[],int n){
    for(int i=0;i<n;i++)
    cout<<ar[i]<<" ";
    
    cout<<endl;
}


int main(){
    int arr[6]={2,3,6,7,12,25};
    int brr[5]={5,23,12,56,11};
    SwapAlternate(arr,6);
    SwapAlternate(brr,5);
    printArray(arr,6);
    printArray(brr,5);
    return 0;

}