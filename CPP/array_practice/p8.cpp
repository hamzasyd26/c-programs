#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    int n=5;
    int k=2;
    k=k%5;
    int ansary[5];
    int j=0;
    for(int i=n-k;i<n;i++){
        ansary[j++]=array[i];
    }
    for(int i=0;i<=k;i++){
        ansary[j++]=array[i];
    }
    for(int j=0;j<5;j++){
        cout<<ansary[j]<<" ";
    }
    return 0;
}