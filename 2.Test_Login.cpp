#include<iostream>
using namespace std;
int main(){
	string username, password,cpassword;
	cout<<"Input user name: "; cin>>username;
	cout<<"Input Password: "; cin>>password;
	cout<<"Input Comfirm Password: "; cin>>cpassword;
	
	if(username=="Pisey"){
		if(password=="12345678"){
			if(cpassword=="12345678"){
				cout<<"Login Successfully!";
			}
		}
	}
	return 0;
}
