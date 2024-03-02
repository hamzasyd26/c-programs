#include<iostream>
using namespace std;
int pri(int n1,int n2){
    int sum=0;
    for(int i=n1;i<=n2;i++){
        for(int j=1;j<=n2;j++){
            if(i%j==0){
                sum+=1;
            }
        }
        if(sum==2){
        cout<<i<<endl;
    }
}
}
int main(){
int a=2;
int b=10;
pri(a,b);
    return 0;
}