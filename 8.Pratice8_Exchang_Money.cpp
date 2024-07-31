//Change Money
#include<iostream>
using namespace std;
int main(){
	float riel,dollar;
	cout<<"Money in Riel= "; cin>>riel;
	dollar=riel/4100;
	cout<<"===============Exchange to $==============="<<endl;
	cout<<"Money=  "<<dollar<<"$"<<endl;
	cout<<endl<<"Money in Dollar= "; cin>>dollar;
	riel=dollar*4100; 
	cout<<"==============Exchange to Riel============="<<endl;
	cout<<"Money=  "<<riel<<"Riel"<<endl;
	
}
