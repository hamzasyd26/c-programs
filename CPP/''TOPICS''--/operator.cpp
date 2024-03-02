#include<iostream>
using namespace std;
int main(){
    int num1 = 8;
    int num2 = 4;
    cout<<num1+num2<<endl; //12
    cout<<num1-num2<<endl; //4
    cout<<num1*num2<<endl; //32
    cout<<num1/num2<<endl; //2
    
    cout<<(num1==num2)<<endl; //2
    cout<<(num1!=num2)<<endl; //2

    num1+=2;//1010
    cout<<num1<<endl;
    num2-=1;//0011
    cout<<num2<<endl;

    cout<<(num1&num2)<<endl;//0010
    cout<<(num1|num2)<<endl;//1011

    return 0;
}