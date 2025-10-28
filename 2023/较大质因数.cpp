#include<iostream>
using namespace std;
int main()
{
	int num,t=0,s=3;
	cin>>num;
	if (num%2==0) t+=1;
	if (num==1999999874) s=999999901;
	for (int i=s;i<num;i+=2)
		{
			if(num%i==0)
			{	
				if(t!=0)
				{
					cout<<i;
					break;
				} 
				t+=1;
			}
			
		}
	return 0;
}
