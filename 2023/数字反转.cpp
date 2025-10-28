#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,l,s=0;cin>>a;
	if(a<0){cout<<'-'; a*=-1;}
	l=log10(a)+1;
	if(a==0)l=1;
	for(int i=l;i>0;i--)
	{
		int b=a%10;
		if(b)s+=1;
		if(s||a==0)cout<<b;
		a=(a-b)/10;
	}
	return 0;
} 
