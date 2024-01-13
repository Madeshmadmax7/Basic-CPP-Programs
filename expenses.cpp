#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int be,te,fe,le,tot;
    cin>>be>>te>>fe>>le;
    tot=be+te+fe+le;
    cout<<"Total exepenses :Rs."<<tot<<endl;
    cout<<"Branding expenses percentage : "<<be/tot<<endl;
    cout<<"Travel expenses percentage : "<<te/tot<<endl;
    cout<<"Food expenses percentage : "<<fe/tot<<endl;
    cout<<"Logistics expenses percentage : "<<le/tot;
}
