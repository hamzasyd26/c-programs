#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,6};
    int n=5;
    int x=7;
    int i=0;
    int j=n-1;
    int count =0;
    while(i<j){
        if(arr[i]+arr[j]==x){
            count+=1;
            i++;
            j--;
        }
        else if(arr[i]+arr[j]<x){
            i++;
        }
        else{
            j--;
        }
    }
    cout<<count;
    return 0;
}