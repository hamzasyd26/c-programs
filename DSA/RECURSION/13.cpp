// to check for palindrome

#include<bits/stdc++.h>
using namespace std;

int pld(int i,string &nm){
    int n= nm.size();
    if(i>=n/2){
        return true;
    }
    if(nm[i]!=nm[n-i-1]){
        return false;
    }
    return pld(i+1,nm);
}

int main(){
    string name = "madam";
    cout<< pld(0,name);
}