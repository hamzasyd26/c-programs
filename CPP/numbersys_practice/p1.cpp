#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum =0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    int res=0;
    int pow=1;
    while(sum>0){
        int rem=sum%2;
        res+=rem*pow;
        pow*=10;
        sum/=2;
    }
    cout<<res;
    return 0;
}