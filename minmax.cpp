#include<iostream>
using namespace std;
void minmax(int a)
{
	int arr[a];
	for(int i=0;i<=a;i++)
	{
		cin>>arr[i];
	}
	int min=arr[0];
	int max=arr[0];
	for(int i=0;i<=a;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	cout<<min<<endl;
	cout<<max;
}
int main()
{
	int n;
	cin>>n;	
}
