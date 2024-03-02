#include<iostream>
using namespace std;
int main(){
    char op;
    float num1,num2;
    cout<<"enter first number: ";
    cin>>num1;
    cout<<"enter second number: ";
    cin>>num2;
    cout<<"enter operator (+,-,*,/): ";
    cin>>op;

    switch(op){
        case '+':
        cout<<(num1+num2)<<endl;
        break;
        case '-':
        cout<<(num1-num2)<<endl;
        break;
        case '*':
        cout<<(num1*num2)<<endl;
        break;
        case '/':
        cout<<(num1/num2)<<endl;
        break;
        default:
        cout<<"Invalid operator!!";
        break;
    }
    return 0;
}