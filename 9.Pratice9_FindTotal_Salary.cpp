#include<iostream>
using namespace std;
int main(){
	int id,name,hour;
	char sex;
	float salary,rate;
	double total;
	cout<<"Input your ID:"; cin>>id;
	cout<<"Input your Sex:"; cin>>sex;
	cout<<"Input your Salary:"; cin>>salary;
	cout<<"Input your rate:"; cin>>rate;
	cout<<"Input your hour:"; cin>>hour;
	total= salary+rate*hour;
	cout<<"ID		SEX		SALARY		RATE		HOUR		TOTAL"<<endl;
	cout<<id<<"		"<<sex<<"		"<<salary<<"		"<<rate<<"		"<<hour<<"		"<<total;
	return 0;
}
