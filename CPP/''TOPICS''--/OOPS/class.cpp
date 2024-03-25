#include<iostream>
using namespace std;

class hero{

    public:
    // private:
    int health;

    public:
    char level;

    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }

    void sethealth(int h){
        health=h;
    }
    void setlevel(int l){
        level=l;
    }
};

int main(){

     //static allocation 
    hero a;
    cout<<"level is "<< a.level <<"\n";
    cout<<"health is "<< a.health <<"\n";

    // dynamic allocation
    hero *b = new hero;
    cout<<"health "<<(*b).gethealth() <<endl;
    cout<<"level "<<(*b).getlevel() <<endl;


    // // creation of object
    // hero ramesh;
    // // ramesh.health= 70;
    // // ramesh.level= 'A';
    // // using getter setter:
    // // cout<<"health is:"<<ramesh.health <<endl;

    // ramesh.sethealth(70);
    // ramesh.setlevel('A');

    // cout<< "rameshs health is "<< ramesh.gethealth()<<"\n";

    // cout<< "ramesh level is "<<ramesh.getlevel();

    return 0;
}