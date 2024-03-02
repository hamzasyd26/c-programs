#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int bin=0;
    int pow =1;
    int zer=0;
    while(n>0){
        int rem =n%2;
        bin+=rem*pow;
        if(rem==0){
            zer+=1;
        }
        pow*=10;
        n/=2;
    }
    cout<<zer<<endl;
    
    return 0;
}