package binary_search;
import java.util.*;

public class bin_search {
  
    static int BinarySearching(int[] arr, int target)
     {

        // return index of target if there
        // return -1 if not present

        int s=0;
        int e= arr.length-1;

        while(s<=e){
            int mid= s+(e-s)/2; // not s+e/2 bcz the range of int might get exceeded
            if(arr[mid]==target)
            return mid;
            else if(arr[mid]<target)
           s=mid+1;
           else if(arr[mid]>target)
           e=mid-1;
        }
        return -1;

     }
     public static void main(String args[]){
        int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,1,3,14,1,5,16,17};
        int x=12;
        int key=BinarySearching(arr,x);
        if(key!=-1)
        System.out.println("found at "+key);
        else
        System.out.println("Not found");

     }
}
