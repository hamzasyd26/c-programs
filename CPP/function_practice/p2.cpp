#include<iostream>
using namespace std;
float arcr(float rad){
    float area = 3.14*(rad*rad);
    float cir = 6.28*(rad);
    cout<<area<<endl;
    cout<<cir<<endl;
}
int main(){
    int radius;
    cin>>radius;
    arcr(radius);
    return 0;
}