#include<iostream>
using namespace std;
int main()
{
	int weight,haemo,age;
	cin>>weight>>haemo>>age;
	if(weight>=40 && haemo>=12 && age>=18)
	{
		cout<<"you can donate";
	}
	else
	{
		cout<<"you cannot donate";
	}
	
}
