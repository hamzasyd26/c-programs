#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number ";
    cin>>num;
    if(num<0){
        num =num*-1;
    }
    cout<<"absolute value of number is "<<num;
    return 0;
}