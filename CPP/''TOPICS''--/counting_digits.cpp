#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int digits=0;
    while(n>0){
        digits+=1;
        n=n/10;
    }
    cout<<"digits of the given number is "<<digits;

    return 0;
}