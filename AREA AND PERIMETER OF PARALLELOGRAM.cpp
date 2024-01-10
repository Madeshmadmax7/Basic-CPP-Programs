#include<iostream>
using namespace std;
int main()
{
	int b,h;
	cout<<"ENTER THE VALUE FOR BASE:";
	cin>>b;
	cout<<"\n ENTER THE VALUE FOR HEIGHT:";
	cin>>h;
	//AREA OF PARALLELOGRAM
	cout<<"\n THE AREA OF PARALLELOGRAM:"<<b*h;
	int a;
	cout<<"\n ENTER THE VALUE FOR A:";
	cin>>a;
	//PERIMETER OF PARALLELOGRAM
	cout<<"\n THE PERIMETER OF PARALLELOGRAM:"<<2*(a+b);
	return 0;
}
