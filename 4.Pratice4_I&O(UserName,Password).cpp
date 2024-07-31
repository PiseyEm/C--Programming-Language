//Input and Output User name, Password, comfirm password
#include<iostream>
using namespace std;
int main(){
	string user_name,password, confirm_password;
	cout<<"Input your User Name:"; getline(cin,user_name);
	cout<<"Input your Password:"; cin>>password;
	cout<<"please confirm your password:"; cin>>confirm_password;
	cout<<endl<<"============================================================="<<endl;
	cout<<"User Name"<<"\t"<<"Password"<<"\t"<<"Confirm Password"<<endl;
	cout<<user_name<<"\t"<<password<<"\t\t"<<confirm_password;
	return 0;
}
