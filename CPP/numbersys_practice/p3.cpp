#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1;   
    cin>>n2;
    int pow=1;
    int res1=0;
    while(n1>0){
        int lstd1=n1%10;
        res1+=lstd1*pow;
        pow*=2;
        n1/=10;
    }
    pow=1;
    int res2=0;
    while(n2>0){
        int lstd2=n2%10;
        res2+=lstd2*pow;
        pow*=2;
        n2/=10;
    }
    if(res1>res2){
        cout<<res1;
    }else{
        cout<<res2;
    }

    return 0;
}