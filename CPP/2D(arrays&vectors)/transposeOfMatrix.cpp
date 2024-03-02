#include<iostream>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    int Ary[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>Ary[i][j];
        }
    }
    int transpose[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            transpose[i][j]=Ary[j][i];
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}