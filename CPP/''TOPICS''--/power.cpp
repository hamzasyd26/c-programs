#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int result=1;
    for(int i=1;i<=b;i++){
        result=result*a;
    }
    cout<<a;
    return 0;
}