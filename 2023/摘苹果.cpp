#include<iostream>
using namespace std;
int main()
{
	int a[10], n, d=0;
	scanf("%d %d %d %d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
	cin>>n;
	for(int i=1;i<=10;i++)
	{
		if (a[i-1]<=n+30) d+=1;
	}
	cout<<d;
	return 0;
}
