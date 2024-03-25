// USING THE HASH METHOD

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter length of the array";
    cin>>n;
    int arr[n];
    cout<<"enter elements of the array";
    for(int i=0;i<n;i++){
        cin>>arr[i]; //1 2 2 4 10 5
    }
    
    // precompute
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1; //0 1 2 0 1 1 0 0 0 0 1 0 0 0
    }
    int q;
    cout<<"enter numbers to be counted";
    cin>>q;
    // cout<<"enter numbers";
    while(q--){
        int number; 
        cin>>number;
        // fetch
        cout<< hash[number];
    }

}