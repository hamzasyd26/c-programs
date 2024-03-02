#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    int x;
    cout<<"enter number whose last occurence is to be found: ";
    cin>>x;
    int pos=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            pos=i;
        }
    }
    cout<<"last occurence of the number is on index > "<<pos;
    return 0;
}