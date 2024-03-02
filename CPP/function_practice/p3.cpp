#include<iostream>
using namespace std;
char vote(int age){
    if(age>=18){
        cout<<"yes";
    }else{
        cout<<"no";
    }
}
int main(){
    int n;
    cin>>n;
    vote(n);
    return 0;
}