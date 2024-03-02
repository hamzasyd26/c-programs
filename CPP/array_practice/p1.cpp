#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    int even=0;
    int odd=0;
    for(int i=0;i<5;i++){
        if(array[i]%2==0){
            even+=1;
        }else{
            odd+=1;
        }
    }
    cout<<"even numbers = "<<even<<endl;
    cout<<"odd numbers = "<<odd<<endl;
    return 0;
}