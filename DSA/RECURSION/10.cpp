
// printing 1 to 10

#include<iostream>
using namespace std;

void nums(int i){
    if(i<1){
        return;
    }
    nums(i-1);
    cout<<i<<endl;
}
int main(){
    nums(10);
}