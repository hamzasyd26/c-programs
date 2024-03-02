#include<iostream>
using namespace std;
int main(){
    int n=123;

    int f=n/100;
    n=n%100;
    int s=n/10;
    n=n%10;
    int t=n/1;
    n=n%1;
    int sum= f+s+t;
    cout<<sum;

    return 0;
}