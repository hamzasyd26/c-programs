#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int dec=0;
    int power=1;
    while(n>0){
        int lastdigit=n%10;
        dec=dec+(lastdigit*power);
        power*=2;
        n/=10;
    }
    cout<<dec;
    return 0;
}