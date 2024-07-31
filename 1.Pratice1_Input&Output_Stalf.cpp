//1.Input and output information of staff
#include<iostream>
using namespace std;
int main(){
	//declar variable
	int id;
	string name,gender,address;
	float salary;
	//Input data
	cout<<"Input ID:"; cin>>id;
	cin.ignore();
	cout<<"Input name:";  getline(cin,name);
	cout<<"Input Gender:"; cin>>gender;
	cout<<"Input address:"; cin>>address;
	cout<<"Input Salary:"; cin>>salary;
	//Output data
	cout<<"======================================================================="<<endl;
	cout<<"ID		NAME	    GENDER	      ADDRESS		SALARY"<<endl;
	cout<<"======================================================================="<<endl;
	cout<<id<<"\t\t"<<name<<"\t\t"<<gender<<"\t\t"<<address<<"\t\t"<<salary<<endl<<"\n";
	cout<<"						Good Bye!";
	return 0;
}
