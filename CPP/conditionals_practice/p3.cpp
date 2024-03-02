#include<iostream>
using namespace std;
int main(){
    int CP,SP;
    cout<<"enter cost price ";
    cin>>CP;
    cout<<"enter selling price ";
    cin>>SP;
    if(SP>CP){
        cout<<"profit = "<<SP-CP;
    }else{
        cout<<"loss = "<<CP-SP;
    }
    return 0;
}