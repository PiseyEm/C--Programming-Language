//Write to Verify Password and Compirm Password
#include<iostream>
using namespace std;
int main(){
	string password;
	string user name;
	string cpassword;
	cout<<"Enter Username"; cin>>username;
	cout<<"Enter Password"; cin>>password;
	cout<<"Enter Comfirm Password"; cin>>cpassword;
	if(password=cpassword)
		cout<<"Login Successfully";
	else cout<<"Invalid...";
	return 0;
}
