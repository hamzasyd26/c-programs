#include<iostream>
using namespace std;

int main() {
	char ch;
	cin>>ch;
	if(65<=int(ch)<=90){
		cout<<1;
	}
	else if(97<=int(ch)<=122){
		cout<<0;
	}
	else{
		cout<<-1;
	}
	
}
