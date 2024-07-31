#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Input Number a:"; cin>>a;
	cout<<"Input Number b:"; cin>>b;

	char option;
	cout<<"Input Your Option: "; cin>>option; 
	switch(option)
		case '+':{
			cout<<a<<"+"<<b<<"="<<a+b;
			break;}
	
	return 0;
}
