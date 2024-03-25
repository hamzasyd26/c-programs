// printing 10 to 1

#include<iostream>
using namespace std;

void nums(int i){
    if(i>10){
        return;
    }
    nums(i+1);
    cout<<i<<endl;
}
int main(){
    nums(1);
}