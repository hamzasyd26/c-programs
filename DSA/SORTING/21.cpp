// MERGE SORT

#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int low,int mid,int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
    if(arr[left]<=arr[right]){
        temp.push_back(arr[left]);
        left++;
    }
    else{
        temp.push_back(arr[right]);
        right++;
    }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++; 
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
    
}
void mergesort(vector<int> &arr,int low,int high){
    if(low>=high){
        return;
    }
    int mid=(low+high)/2;
    mergesort(arr, low, mid);
    mergesort(arr,mid+1, high);
    merge(arr,low,mid,high);
}
int main(){
    vector<int> ary={3,1,2,4,1,5,2,6,4};
    mergesort(ary,0,9);
    for(int i=0;i<ary.size();i++){
        cout<<ary[i]<<" ";
    }
    
}