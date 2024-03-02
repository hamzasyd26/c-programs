#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    // for loop -->
    for(int i=0;i<5;i++){
        int ele;
        cin>>ele;
        vec.push_back(ele);
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }

cout<<endl;

vec.insert(vec.begin()+2,6);
    // for each loop -->
    for(int elm:vec){
        cout<<elm<<" ";
    }
    cout<<endl;

    vec.erase(vec.end()-2);

    // while loop -->
    int ind=0;
    while(ind<vec.size()){
        cout<<vec[ind++]<<" ";
    }
    return 0;
}