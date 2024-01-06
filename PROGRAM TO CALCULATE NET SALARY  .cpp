#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float basic,da,hra,gpf,tax,gross,np;
	char name[30];
	cout<<"\n ENTER BASIC PAY:";
	cin>>basic;
	cout<<"\n ENTER D.A:";
	cin>>da;
	cout<<"\n ENTER H.R.A:";
	cin>>hra;
	gross=basic+da+hra;
	gpf=(basic+da)*0.10;
	tax=gross*0.10;
	np=gross-(gpf+tax);
	cout<<setw(25)<<"basic pay:"<<setw(10)<<basic<<endl;
	cout<<setw(25)<<"dearness allowance:"<<setw(10)<<da<<endl;
	cout<<setw(25)<<"house rent allownace:"<<setw(10)<<hra<<endl;
	cout<<setw(25)<<"gross pay:"<<setw(10)<<gross<<endl;
	cout<<setw(25)<<"g.p.f:"<<setw(10)<<gpf<<endl;
	cout<<setw(25)<<"income tax"<<setw(10)<<tax<<endl;
	cout<<setw(25)<<"net pay"<<setw(10)<<np<<endl;
	return 0;
}
