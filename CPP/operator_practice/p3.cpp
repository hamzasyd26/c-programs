#include<iostream>
using namespace std;
int main(){
    int n =12345;
    int f= n/10000;
    n=n%10000;
    int s= n/1000;
    n=n%1000;
    int t= n/100;
    n=n%100;
    int fr= n/10;
    n=n%10;
    int ft= n/1;
    n=n%1;
    int sum =(f+fr);
    cout<<sum;
    
    return 0;
}