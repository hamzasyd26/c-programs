#include<iostream>
using namespace std;
int main(){
    int array[]={3,1,2,4,0,6};
    int trgtsm= 6;
    int size=6;
    int rest=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(array[i]+array[j]+array[k]==trgtsm){
                    rest++;
                }
            }
        }
    }
    cout<<rest;
    return 0;
}