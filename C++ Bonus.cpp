//Program to determine net bonus
#include<iostream>
using namespace std;
int main()
{
	int period,salary;
	float net_bonus;
	cout<<"enter your period"<<endl;
	cin>>period;
	cout<<"enter your salary in Ksh."<<endl;
	cin>>salary;
	if(period>10)
	{
		net_bonus=(salary *0.1);
		cout<<"your net bonus is Ksh."<<net_bonus<<endl;
	}
	else if(period>=6&&period<=10)
	{
		net_bonus =(salary *0.08);
		cout<<"your net_ bonus is Ksh."<<endl;
	}
	else if(period>6)
	{
		net_bonus =(salary *0.05);
		cout<<"your net_bonus is Ksh."<<net_bonus;
	}
	return 0;

	
}
