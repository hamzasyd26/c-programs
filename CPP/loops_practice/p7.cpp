#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mid=n/2+1;
    for(int i=1;i<=n;i++){
        if(i==mid){
            for(int j=1;j<=n;j++){
                cout<<"*";
            }
        }
        else{
            for(int j=1;j<=n/2;j++){
            cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}