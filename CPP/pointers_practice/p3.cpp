#include<iostream>
using namespace std;
int main(){
    int arr[2]={3,5};
    int *ptr = &arr[0];
    cout<<(*ptr)++<<"\n";
    cout<<arr[0];
    return 0;
}