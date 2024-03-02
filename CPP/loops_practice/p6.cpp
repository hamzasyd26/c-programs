#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int line=1;line<=n;line++){
        int space=n-line;
        for(int i=0;i<space;i++){
            cout<<" ";
        }
        int noc=2*line-1;
        for(int i=0;i<noc;i++){
            cout<<char('A'+i)<<" ";
        }
        cout<<endl;
    }
    for(int lne=n+1;lne<=2*n-1;lne++){
        int spc=lne-n;
        for(int j=0;j<spc;j++){
            cout<<" ";
        }
        int chr=2*(2*n-lne)-1;
        for(int j=0;j<chr;j++){
            cout<<char('A'+j)<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}