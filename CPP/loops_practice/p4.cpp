#include<iostream>
using namespace std;
int main(){
    int n,t,r,rev=0;
    cin>>n;
    t=n;
    while(t>0){
        r=t%10;
        t/=10;
        rev = rev*10+r;
    }
    cout<<rev;
    return 0;
}