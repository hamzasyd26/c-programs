#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cube=1;
    for(int i=1;i<=3;i++){
        cube=cube*n;
    }
    cout<<cube;
    return 0;
}