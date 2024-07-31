#include<iostream>
using namespace std;
int main(){
	int number;
	cout<<"Input Number: "; cin>>number;
	if(number>0)
		cout<<"Number is Positive";
	else if (number==0)
		cout<<"Number is Zero";
     else cout<<"Number is Negative";
	return 0;
}
