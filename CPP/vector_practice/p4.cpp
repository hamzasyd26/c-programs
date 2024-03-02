#include<iostream>
#include<vector>
using namespace std;
int main(){
    int array[]={1,2,1,2,1,2};
    int evn=0;
    int odd=0;
    for(int i=0;i<6;i++){
        if(i%2==0){
            evn+=array[i];
        }
        else{
            odd+=array[i];
        }
    }
    cout<<(evn-odd);
    return 0;
}