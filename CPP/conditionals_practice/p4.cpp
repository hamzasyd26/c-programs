#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"enter the integer";
    cin>>i;
    if(i<0){
        cout<<"entered number is negative and skipped";
    }else{
        cout<<"entered number is positive";
    }
    return 0;
}