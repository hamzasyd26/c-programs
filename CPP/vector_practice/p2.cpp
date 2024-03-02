#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    int x;
    cout<<"enter x: ";
    cin>>x;
    int occ=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occ+=1;
        }
    }
    cout<<occ;
    return 0;
}