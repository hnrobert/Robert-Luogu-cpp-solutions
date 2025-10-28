#include<iostream>
using namespace std;
int main()
{
	int k,h=0;cin>>k;
	for(int i=10000;i<=30000;i++)
	{
		int a=(i-i%100)/100,b=(i-i%10)%10000/10,c=i%1000;
		if(a%k==0&&b%k==0&&c%k==0)
		{
			cout<<i<<endl;
			h=1;
		}
	}
	if(!h)cout<<"No";
	return 0;
}
