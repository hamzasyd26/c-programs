
// printing names five times 


#include<iostream>
using namespace std;

void five(string name){
    int i=5;
    while(i!=0){
        cout<<name<<endl;
        i--;
    }
} 
int main(){
    string nm;
    cout<<"enter the name ";
    cin>>nm;
    five(nm);

    return 0;
}