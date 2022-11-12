// Finding an Unique element which occurs only once in an Array
// n is the size of the array and n= 2m+1
//Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
// You need to find and return that number which is unique in the array/list.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findUnique(int *arr, int size)
{
   int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main()
{
    int arr[7]={2,3,1,6,3,6,2};
    int n= sizeof(arr)/sizeof(int);
    int ans= findUnique(arr,n);
    cout<< ans<<endl; 
    return 0;
}