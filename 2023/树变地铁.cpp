#include<iostream>
using namespace std;
int main()
{
	int l,m,num=0;
	scanf("%d %d",&l,&m);
	int n[l];
	for(int i=0;i<=l;i++)
	{
		n[i]=1;
	}
	for(int i=0;i<m;i++)
	{
		int j,k;
		scanf("%d %d",&j,&k);
		for (int o=j;o<=k;o++)
		{
			n[o]=0;
		}
	}
	for(int i=0;i<=l;i++) 
	{
		if(n[i]) ++num;
	}
	cout<<num;
}
