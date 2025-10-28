#include<iostream>
using namespace std;
int main()
{
	int n,k,num=0;cin>>n>>k;
	int rec=0;
	while(n>0)
	{
		n--;
		if(++rec==k)
		{
			rec=0;
			n++;
		}
		num++;
	}
	cout<<num;
	return 0;
} 
