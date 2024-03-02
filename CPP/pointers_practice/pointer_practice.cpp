#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int *ptrx = &x;
    int *ptry = &y;

    int result;
    int *ptr_res = &result;

    *ptr_res = *ptrx+*ptry;  // Destructing the pointers //
    cout<<result;
    return 0;
}
