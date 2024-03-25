// factorial of a number

#include<bits/stdc++.h>
using namespace std;

int fact(int a){
    if(a-1==0){
        return 1;
    }
    return a*fact(a-1);
}

int main(){
    cout<< fact(10);
    return 0;
}