#include<iostream>
using namespace std;
int main(){
	int code,dis,qty;
	string name;
	float price;
	double total,total1;
	cout<<"Product CODE: ";
	cin>>code;
	cout<<"Product Name: ";
	cin>>name;
	cout<<"Product Qty: ";
	cin>>qty;
	cout<<"Product Price: ";
	cin>>price;
	cout<<"Product Discount: ";
	cin>>dis;
	total1=(price*qty);
	dis=(total1*dis)/100;
	total=total1-dis;
	/*cout<<"CODE="<<code<<endl;
	cout<<"Name="<<name<<endl;
	cout<<"QTY="<<qty<<endl;
	cout<<"PRICE="<<price<<endl;*/
	cout<<"Total= "<<total1<<endl;
	cout<<"Discount="<<dis<<endl;
	cout<<"Payment= "<<total;
	return 0;
}
