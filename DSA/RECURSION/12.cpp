// reversal of a array

#include<bits/stdc++.h>
using namespace std;

void rev(int i,int arr[],int n){
    if(i>n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    rev(i+1,arr, n);
}

int main(){
    cout<<"enter number of elements";
    int n;
    cin>>n;
    int arr[n];
    int ar;
    cout<<"enter elements";
    for(int j=0;j<n;j++){
        cin>>ar;
        arr[j]=ar;
    }

    rev(0,arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}