#include<iostream>
using namespace std;
int main(){
    int val;
    cin>>val;
    if(val%2==0 & val%3==0){
        cout<<val<<" is valid number";
    }
    else{
        cout<<val<<" is invalid number";
    }

    return 0;
}