// for single number to be counted

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter length of the array";
    cin>>n;
    int arr[n];
    cout<<"enter elements of the array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int q;
    cout<<"enter number to be counted";
    cin>>q;
    int count=0;
    for(int j=0;j<n;j++){
        if(arr[j]==q){
            count+=1;
        }
    }
    cout<<"number of counts is: " <<count;
}