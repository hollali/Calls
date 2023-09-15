#include<iostream>

using namespace std;

int main()
{
	int day, time, mins, calltype,cost;
	cout<<"Enter The Number"<<endl;
	cout<<"Corresponding to the day the call was made"<<endl;
	cout<<"1-Monday"<<endl;
	cout<<"2-Tuesday"<<endl;
	cout<<"3-Wenesday"<<endl;
	cout<<"4-Thursday"<<endl;
	cout<<"5-Friday"<<endl;
	cout<<"6-Saturday"<<endl;
	cout<<"7-Sunday"<<endl;
	cin>> day;
	
	cout<<"What time the call was made(value should be in a 24 hour format ie. 18 means 6 O'clock etc"<<endl;
	cin>> time;
	
	
	cout<<"Enter '1' for Same network"<<endl;
	cout<<"Enter '2' for Differnt network"<<endl;
	cout<<"Enter '3' for International calls"<<endl;
	cin>>calltype;
	
	if(day >= 1 && day <=5)
	{
		if (time >= 7 && time <= 19)
		{
			if(calltype == 1)
			{
				cost = 1200 * mins;
			}
			else if(calltype == 2)
			{
				cost == 2400 * mins;
			}
			else if (calltype == 3)
			{
				cost == 8200 * mins;
			}
		}
		else if(time >= 0 && time <= 6 || time >= 20 && time <= 24)
		{
			if(calltype == 1)
			{
				cost = 800 * mins;
			}
			else if(calltype == 2)
			{
				cost = 1400 * mins;
			}
			else if(calltype == 2)
			{
				cost = 5200 * mins;
			}
		}
		
		else if(day == 6|| day == 7)
		{
			if(calltype == 1)
			{
				cost = 100;
			}
			else if(calltype == 2)
			{
				cost = 600 * mins;
			}
			else if(calltype == 3)
			{
				cost = 4000 * mins;
			}
			
		}
	}
	
	cout<<"The Person is to pay "<<cost<<"Cedis."<<endl;
	
	return 0;
}
