#include<iostream>
using namespace std;
int main()
{
	int date=0,hest=0,ts,te;
	for(int i=0;i<7;i++)
	{
		cin>>ts>>te;
		if(ts+te>hest && ts+te>8)
		{
			date=i+1;
			hest=ts+te;
		}
	}
	cout<<date;
	return 0;
}
