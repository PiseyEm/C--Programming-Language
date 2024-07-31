//Find Total and Average
#include<iostream>
using namespace std;
int main(){
	//declar variable
	float s1,s2,s3,s4,s5,total,aver;
	//Input score
	cout<<"   Input Your Score Here...!"<<"\n";
	cout<<"==============================="<<"\n";
	cout<<"Input Score1: "; cin>>s1;
	cout<<"Input Score2: "; cin>>s2;
	cout<<"Input Score3: "; cin>>s3;
	cout<<"Input Score4: "; cin>>s4;
	cout<<"Input Score5: "; cin>>s5;
	cout<<"==============================="<<"\n";
	total=s1+s2+s3+s4+s5;
	aver=total/5;
	//output total and average
	cout<<"\t"<<"Total   ="<<total<<"\n";
	cout<<"\t"<<"Average ="<<aver<<"\n";
	cout<<"==============================="<<"\n";
	return 0;
}
