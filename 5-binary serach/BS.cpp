#include<iostream>
using namespace std;
#include <bits/stdc++.h> 
int firstOcc(vector<int>&arr,int n, int k){
    int start=0, end=n-1;
    int mid = start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        
        if(arr[mid]==k){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        else if(arr[mid]<k){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    
    return ans;
}
int lastOcc(vector<int>&arr,int n, int k){
    int start=0, end=n-1;
    int mid = start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==k){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        else if(arr[mid]<k){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int>p;
    p.first=firstOcc(arr,n,k);
    p.second=lastOcc(arr,n,k);
    return p;
} 
int main() {
    vector<int>arr1;
    int arr[7]={1,2,3,3,3,3,4};
    int n=7;
   
   
    int k=3;
   
}