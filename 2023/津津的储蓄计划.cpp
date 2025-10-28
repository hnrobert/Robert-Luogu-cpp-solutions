#include<iostream>
using namespace std;
int main()
{
	int m[12]={},left=0,save=0,endsave=0,mt=0;
	for(int i=0;i<12;i++)
	{
		left+=300;
		cin>>m[i];
		left-=m[i];
		if(left<0 && !endsave)
		{
			mt=-i-1;
			endsave=1;
		}else{
			save+=left-left%100;
			left%=100;
		}
	}
	if(endsave)cout<<mt;
	else cout<<left+save*1.2;
	return 0;
} 
