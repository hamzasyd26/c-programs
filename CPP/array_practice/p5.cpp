#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int &ele:arr){
        cin>>ele;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}