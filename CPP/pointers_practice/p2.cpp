#include<iostream>
using namespace std;
void findfinandlin(string s,char ch, int *first,int *last){
    for(int i=0;i<s.size();i++){
        if(s[i]==ch){
            *first= i;
            break;
        }
    }
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]==ch){
            *last= i;
            break;
        }
    }
}
int main(){
    string str = "aaabac";
    char ch = 'a';
    int firstind= -1;
    int lastind= -1;

    int *p1= &firstind;
    int *p2= &lastind;

    findfinandlin(str,ch,p1,p2);
    cout<<*p1<<" "<<*p2;
    return 0;
}