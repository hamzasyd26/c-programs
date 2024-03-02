#include<iostream>
using namespace std;
int odd(int num1,int num2){
    for(int i=num1;i<=num2;i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }
}
int main(){
int a,b;
cin>>a;
cin>>b;
odd(a,b);
    return 0;
}