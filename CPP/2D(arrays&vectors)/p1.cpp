#include<iostream>
#include<vector>
using namespace std;
int rowofmaxones(vector<vector<int>> &v){
    int rowno = -1;
    int colmn= v[0].size();
    int maxones = 0;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==1){
                int numofones= colmn-j;
                if(numofones>maxones){
                    maxones= numofones;
                    rowno= i;
                }
            }
        }
    }
    return rowno;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> vec(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[n][m];
        }
    }
    int res = rowofmaxones(vec);
    cout<<res<<endl;
    return 0;
}