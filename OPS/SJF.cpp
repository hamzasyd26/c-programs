#include<bits/stdc++.h>
using namespace std;
class Process{
public:
    int pid;
    int at;
    int bt;
    int ct;
    int tat;
    int wt; 
};  
void cTime(vector<Process>& v){
    
    v[0].ct = v[0].at + v[0].bt;
    for(int i=1;i<v.size();i++){
        v[i].ct = v[i-1].ct + v[i].bt;
    }
}
void TATime(vector<Process>& v){
    for(int i=0;i<v.size();i++){
        v[i].tat = v[i].ct - v[i].at;
    }
}
void wTime(vector<Process>& v){
    for(int i=0;i<v.size();i++){
        v[i].wt = v[i].tat - v[i].bt;
    }
}
int main(){
    for(int j=0;j<v.size();j++){
        if(bt[i+1]<bt[i]){
            swap(bt[i],bt[i+1]);
            swap(at[i],at[i+1]);
        }
    }
    int n;
    cout<<"Enter the number of Processes: \n";
    cin>>n;
    vector<Process> v(n);
    for(int i=0;i<n;i++){
        v[i].pid = i;
        cout<<"Enter the arrival time: \n";
        cin>>v[i].at;
        cout<<"Enter the burst time: \n";
        cin>>v[i].bt;
    }
    cTime(v);
    TATime(v);
    wTime(v);
    cout<<"AT\t BT\t CT\t TAT\t WT"<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i].at<<"\t "<<v[i].bt<<"\t "<<v[i].ct<<"\t "<<v[i].tat<<"\t "<<v[i].wt<<endl;
    }
    cout<<endl;
    cout<<"Average ";
    return 0;
}