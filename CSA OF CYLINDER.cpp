#include<iostream>
using namespace std;
int main()
{
float pi=3.14,radius,height,CSA;
cout<<"\n CURVED SURFACE AREA OF A CYLINDER";
cout<<"\n ENTER THE RADIUS(IN CM):";
cin>>radius;
cout<<"\n ENTER HEIGHT(IN CM):";
cin>>height;
CSA=(2*pi*radius)*height;
system("cls");
cout<<"\n RADIUS:"<<radius<<"cm";
cout<<"\n HEIGHT:"<<height<<"cm";
cout<<"\n CSA OF CYLINDER IS="<<CSA<<"sq.cm";
return 0;	
}
