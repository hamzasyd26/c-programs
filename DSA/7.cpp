#include<bits/stdc++.h>
using namespace std;

void ptrn(int n){

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*" ;
        }
        cout<<endl;
    }

}
void ptrn2(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void ptrn3(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<(n-i);j++){
            cout<<" ";
        }
        for(int j=0;j<(2*i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void ptrn4(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void ptrn5(int n){
    int start;
    for(int i=0;i<n;i++){
        if(i%2==0){
            start=1;
        }else{
            start=0;
        }
        for(int j=0;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}
void ptrn6(int n){
    int space=2*(n-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        space=space-2;
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
void ptrn7(int n){
    int inc=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<inc<<" ";
            inc+=1;
        }
        cout<<endl;
    }
}
void ptrn8(int n){
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void ptrn9(int n){
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int num;
    cin>>num;
    // ptrn(num);
    // ptrn2(num);
    // ptrn3(num);
    // ptrn4(num);
    // ptrn5(num);
    // ptrn6(num);
    // ptrn7(num);
    // ptrn8(num);     
    ptrn9(num);     
}