#include<bits/stdc++.h>
using namespace std;

// pass by refrence:
void inc(int &num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
int main(){
    int num;
    cin>>num;
    inc(num);
    cout<<num;
}