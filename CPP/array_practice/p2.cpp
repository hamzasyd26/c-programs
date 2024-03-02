#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    int max=array[0];
    int min=array[0];
    for(int i=0;i<5;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    for(int i=0;i<5;i++){
        if(array[i]<min){
            min=array[i];
        }
    }
    cout<<(max+min);
    return 0;
}