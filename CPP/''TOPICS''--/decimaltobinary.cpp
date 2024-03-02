#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int bin=0;
    int power=1;
    while(n>0){
        int rem=n%2;
        bin+=rem*power;
        power*=10;
        n/=2;
    }
    cout<<bin;
    return 0;
}