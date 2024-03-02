#include<iostream>
#include<vector>
using namespace std;
bool checkprefixsuffixsum(vector<int> v){
    int total=0;
    for(int i=0;i<v.size();i++){
        total+=v[i];
    }
    int prefix=0;
    for(int i=0;i<v.size();i++){
        prefix+=v[i];
        int suffix= total-prefix;

        if(suffix == prefix){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    cout<<checkprefixsuffixsum(v);
    return 0;

}