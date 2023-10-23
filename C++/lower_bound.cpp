//Problem: Given a sorted array/vector arr and a value k, find the index of first element in the array which is greater than or equal to k.

//Solution: Since we have a sorted array, we can use an algorithm similar to binary search
#include<iostream>
#include<vector>
using namespace std;

int lowerBound(vector<int>& arr, int k){
    int n = arr.size();
    int l = 0;
    int r = n-1;

    // if all the elements in array are less than k, then lower bound is n
    int lb = n; 
    while(l<=r){
        // use this instead of (l+r)/2 to avoid integer overflow
        int mid = l + (r-l)/2;  

        //if the middle value is greater than or equal to k, it may be lower bound
        if(arr[mid] >= k){
            lb = mid;
            r = mid-1;
        }
        else{
            l = mid + 1;
        }
    }
    return(lb);
}

int main(){
    //sorted array
    vector<int> arr = {4, 7, 10, 15, 32, 37, 37, 37, 48, 94}; 
    int k = 35;
    
    int lb = lowerBound(arr, k);
    cout<<"Lower Bound : "<<lb<<'\n';

    return(0);
}