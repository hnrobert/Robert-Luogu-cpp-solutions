#include<iostream>
#include<cmath>
#include <cstring>
using namespace std;
int main()
{
	int num=1;cin>>num;
	int j[num-1],n[num],p=1;
	memset(j, 0, sizeof(j));memset(n, 0, sizeof(n));
	for(int i=0;i<num;i++) cin>>n[i];
	for(int i=0;i<num-1;i++) {if(abs(n[i]-n[i+1])-1>1000) {cout<<"Not jolly";return 0;} j[abs(n[i]-n[i+1])-1]=1;}
	for(int i=0;i<num-1;i++) if(!j[i]) 
	{
		cout<<"Not jolly";
		return 0;
	}
	cout<<"Jolly";
	return 0;		
}
