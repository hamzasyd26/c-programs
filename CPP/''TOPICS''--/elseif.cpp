#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter age";
    cin>>age;
    if(age<12){
        cout<<"child";
    }
    else if(age>18){
        cout<<"adult";
    }
    else{
        cout<<"Teenager";
    }
    return 0;
}