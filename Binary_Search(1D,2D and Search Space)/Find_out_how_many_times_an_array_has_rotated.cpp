#include<bits/stdc++.h>

int findKRotation(vector<int> &arr){

    // Write your code here.    

    int ans=INT_MAX;

    int n=arr.size();

    int low=0,high=n-1; //defining the search space

    int ind=-1;

    while(low<=high){

        int mid=low+(high-low)/2;

        //left sorted:

        if(arr[low]<=arr[mid]){

            if(arr[low]<=ans){

                ind = low;

                ans = min(ans,arr[low]);

            }

            low=mid+1;

        }

 

        //right sorted:

        else{

            if(arr[mid]<=ans){

                ind = mid;

                ans = min(ans,arr[mid]);

            }

            high=mid-1;

        }

    }

    return ind;

}