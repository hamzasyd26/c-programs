#include<iostream>
using namespace std;
int main(){
    int array[]={3,7,18,9,11};
    int size=sizeof(array)/sizeof(array[0]);
    int max = 0;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    cout<<max;
    return 0;
}