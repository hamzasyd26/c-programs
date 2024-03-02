#include<iostream>
using namespace std;
int main(){
int array[]={3,9,18,11,7};
int num =12;
for(int i=0;i<5;i++){
    if(array[i]==num){
        cout<<i;
    }
}    
    return 0;
}